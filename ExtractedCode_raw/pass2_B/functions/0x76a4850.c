// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreatePropertyFromConstructorParameter
// address: 0x76a4850
// body: available
// range: 0x76a4850-0x76a4aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a4aec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreatePropertyFromConstructorParameter
               (undefined8 param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong local_40;
  undefined1 local_34 [4];
  
  if ((DAT_09522625 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091873a8);
    FUN_03f5c2a4(&DAT_091b6cf0);
    FUN_03f5c2a4(&DAT_091b7170);
    FUN_03f5c2a4(&DAT_091b75a0);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b7190);
    FUN_03f5c2a4(&DAT_091b7378);
    FUN_03f5c2a4(&DAT_091b72c0);
    FUN_03f5c2a4(&DAT_09189d20);
    DAT_09522625 = 1;
  }
  local_34[0] = 0;
  local_40 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_091873a8);
  System_Object___ctor(lVar3,0);
  if (param_3 != (long *)0x0) {
    uVar4 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    if (lVar3 != 0) {
      Newtonsoft_Json_Serialization_JsonProperty__set_PropertyType(lVar3,uVar4);
      uVar4 = thunk_FUN_03f9944c(DAT_09189d20);
      Newtonsoft_Json_Serialization_ReflectionAttributeProvider___ctor(uVar4,param_3,0);
      *(undefined8 *)(lVar3 + 0x70) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x70),uVar4);
      uVar4 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
      plVar5 = (long *)(**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        Newtonsoft_Json_Serialization_DefaultContractResolver__SetPropertySettingsFromAttributes
                  (param_1,lVar3,param_3,uVar4,uVar6,0,local_34);
        *(undefined2 *)(lVar3 + 0x81) = 0x100;
        if (param_2 != 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x30);
          uVar4 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
          uVar7 = System_String__op_Inequality(uVar6,uVar4,0);
          lVar8 = lVar3;
          if ((uVar7 & 1) == 0) {
            lVar8 = param_2;
          }
          Newtonsoft_Json_Serialization_JsonProperty__set_PropertyName
                    (lVar3,*(undefined8 *)(lVar8 + 0x30));
          lVar8 = *(long *)(lVar3 + 0x78);
          if (lVar8 == 0) {
            lVar8 = *(long *)(param_2 + 0x78);
          }
          *(long *)(lVar3 + 0x78) = lVar8;
          thunk_FUN_03f5d7b8();
          if ((*(char *)(lVar3 + 0x18) == '\0') && (*(char *)(param_2 + 0x18) != '\0')) {
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_2 + 0x20);
            *(undefined1 *)(lVar3 + 0x18) = 1;
            thunk_FUN_03f5d7b8();
          }
          local_40 = *(ulong *)(lVar3 + 0x10);
          uVar2 = *(ushort *)(lVar3 + 0x84);
          puVar1 = (undefined8 *)(param_2 + 0x10);
          if ((*(ulong *)(lVar3 + 0x10) & 0xff) != 0) {
            puVar1 = &local_40;
          }
          *(ulong *)(lVar3 + 0x10) = *puVar1;
          if ((uVar2 & 0xff) == 0) {
            uVar2 = *(ushort *)(param_2 + 0x84);
          }
          uVar7 = *(ulong *)(lVar3 + 0x88);
          *(ushort *)(lVar3 + 0x84) = uVar2;
          if ((uVar7 & 0xff) == 0) {
            uVar7 = *(ulong *)(param_2 + 0x88);
          }
          uVar9 = *(ulong *)(lVar3 + 0x90);
          *(ulong *)(lVar3 + 0x88) = uVar7;
          if ((uVar9 & 0xff) == 0) {
            uVar9 = *(ulong *)(param_2 + 0x90);
          }
          uVar7 = *(ulong *)(lVar3 + 0x98);
          *(ulong *)(lVar3 + 0x90) = uVar9;
          if ((uVar7 & 0xff) == 0) {
            uVar7 = *(ulong *)(param_2 + 0x98);
          }
          uVar9 = *(ulong *)(lVar3 + 0xa0);
          *(ulong *)(lVar3 + 0x98) = uVar7;
          if ((uVar9 & 0xff) == 0) {
            uVar9 = *(ulong *)(param_2 + 0xa0);
          }
          uVar7 = *(ulong *)(lVar3 + 0xa8);
          *(ulong *)(lVar3 + 0xa0) = uVar9;
          if ((uVar7 & 0xff) == 0) {
            uVar7 = *(ulong *)(param_2 + 0xa8);
          }
          *(ulong *)(lVar3 + 0xa8) = uVar7;
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

