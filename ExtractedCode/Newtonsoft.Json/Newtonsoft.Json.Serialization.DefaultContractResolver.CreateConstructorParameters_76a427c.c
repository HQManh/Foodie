// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateConstructorParameters
// address: 0x76a427c
// body: available
// range: 0x76a427c-0x76a43ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a43e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a43ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateConstructorParameters
               (long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  if ((DAT_09522624 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091873b0);
    DAT_09522624 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = (**(code **)(*param_2 + 600))(param_2,*(undefined8 *)(*param_2 + 0x260));
    uVar3 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    lVar4 = thunk_FUN_03f9944c(DAT_091873b0);
    Newtonsoft_Json_Serialization_JsonPropertyCollection___ctor(lVar4,uVar3);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar8 = *(long **)(lVar2 + (long)(int)uVar9 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_076a43e8;
          lVar5 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          if (lVar5 != 0) {
            uVar3 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
            uVar6 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
            lVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__MatchProperty
                              (uVar6,param_3,uVar3,uVar6);
            if (lVar5 == 0) {
              lVar7 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              if (lVar7 == 0) goto LAB_076a43c0;
            }
            lVar5 = (**(code **)(*param_1 + 0x1c8))
                              (param_1,lVar5,plVar8,*(undefined8 *)(*param_1 + 0x1d0));
            if (lVar5 != 0) {
              if (lVar4 == 0) goto LAB_076a43e8;
              Newtonsoft_Json_Serialization_JsonPropertyCollection__AddProperty(lVar4,lVar5);
            }
          }
LAB_076a43c0:
          uVar1 = *(uint *)(lVar2 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      return lVar4;
    }
  }
LAB_076a43e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

