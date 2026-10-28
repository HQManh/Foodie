// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryReadOffset
// address: 0x768f164
// body: available
// range: 0x768f164-0x768f2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_DateTimeUtils__TryReadOffset
          (undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  if ((DAT_0952258f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0952258f = 1;
  }
  local_48 = 0;
  sVar1 = Newtonsoft_Json_Utilities_StringReference__get_Item(&local_40,param_3,0);
  uVar3 = local_40;
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182b90);
  }
  iVar2 = Newtonsoft_Json_Utilities_ConvertUtils__Int32TryParse
                    (uVar3,param_3 + 1,2,(long)&local_48 + 4);
  uVar3 = local_40;
  if (iVar2 == 1) {
    local_48 = local_48 & 0xffffffff00000000;
    if (5 < uStack_38._4_4_ - param_3) {
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = Newtonsoft_Json_Utilities_ConvertUtils__Int32TryParse(uVar3,param_3 + 3,2,&local_48);
      if (iVar2 != 1) goto LAB_0768f2cc;
    }
    iVar2 = local_48._4_4_;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeSpan__FromHours((double)iVar2,0);
    uVar4 = System_TimeSpan__FromMinutes((double)(int)local_48,0);
    uVar3 = System_TimeSpan__op_Addition(uVar3,uVar4,0);
    *param_4 = uVar3;
    if (sVar1 == 0x2d) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_TimeSpan__Negate(param_4,0);
      uVar3 = 1;
      *param_4 = uVar4;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
LAB_0768f2cc:
    uVar3 = 0;
    *param_4 = 0;
  }
  return uVar3;
}

