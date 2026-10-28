// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$FinishReadQuotedNumber
// address: 0x7653f40
// body: available
// range: 0x7653f40-0x7654007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654004 to 0x89db638 FUN_089db638 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__FinishReadQuotedNumber(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_70 [32];
  undefined1 local_50 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_095223b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917dc48);
    FUN_03f5c2a4(&DAT_0917dc60);
    FUN_03f5c2a4(&DAT_0917dc80);
    DAT_095223b3 = 1;
  }
  if (param_2 == 8) {
    uVar2 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
    local_50 = Newtonsoft_Json_JsonReader__ReadDoubleString(param_1,uVar2);
    puVar4 = &DAT_0917dc60;
  }
  else {
    if (param_2 == 5) {
      uVar2 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
      uVar2 = Newtonsoft_Json_JsonReader__ReadDecimalString(local_50,param_1,uVar2);
      FUN_089db638(&PTR_DAT_08ff4000,local_50._0_8_,uVar2,auStack_70);
      return;
    }
    if (param_2 != 1) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_092215d8);
      System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar3 = thunk_FUN_03fc39d4(&DAT_091d1bf8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar3);
      }
      goto LAB_076540cc;
    }
    uVar2 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
    uVar2 = Newtonsoft_Json_JsonReader__ReadInt32String(param_1,uVar2);
    local_50._0_8_ = uVar2;
    puVar4 = &DAT_0917dc80;
  }
  FUN_03f5c42c(*puVar4,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_076540cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

