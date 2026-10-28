// rea decompile_all
// name: Newtonsoft.Json.Converters.DataSetConverter$$WriteJson
// address: 0x7703afc
// body: available
// range: 0x7703afc-0x7703ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7703ec8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ee0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703eec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703ef4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07703ef0) */
/* WARNING: Removing unreachable block (ram,0x07703e90) */

void Newtonsoft_Json_Converters_DataSetConverter__WriteJson
               (undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09522956 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091832b8);
    FUN_03f5c2a4(&DAT_091832f0);
    FUN_03f5c2a4(&DAT_091832d8);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09522956 = 1;
  }
  if (param_3 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07703c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
      return;
    }
    goto LAB_07703ee4;
  }
  if (param_4 == (long *)0x0) goto LAB_07703ee4;
  plVar1 = (long *)(**(code **)(*param_4 + 0x3a8))(param_4,*(undefined8 *)(*param_4 + 0x3b0));
  if (plVar1 == (long *)0x0) {
LAB_07703bcc:
    plVar1 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) goto LAB_07703bcc;
    if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) !=
        DAT_09183878) {
      plVar1 = (long *)0x0;
    }
  }
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_091832f0);
  Newtonsoft_Json_JsonConverter___ctor(plVar2,0);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_091832b8 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_091832b8 + 0x130) * 8 + -8) !=
        DAT_091832b8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    plVar3 = (long *)param_3[5];
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07703d0c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07703d0c:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar1 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
          if (plVar1 == (long *)0x0) goto LAB_07703e84;
          lVar6 = *plVar1;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_07703e5c;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_07703e44;
        }
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07703d74;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_07703d74:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
          if (plVar1 != (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_091832d8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_091832d8 + 0x130) * 8 + -8) !=
            DAT_091832d8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        lVar6 = plVar5[0x12];
        if (plVar1 != (long *)0x0) {
          lVar6 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                            (plVar1,lVar6,0);
        }
        (**(code **)(*param_2 + 0x5d8))(param_2,lVar6,*(undefined8 *)(*param_2 + 0x5e0));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x178))
                  (plVar2,param_2,plVar5,param_4,*(undefined8 *)(*plVar2 + 0x180));
      } while( true );
    }
  }
LAB_07703ee4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_07703e44:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07703e78;
    }
  }
LAB_07703e5c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_07703e78:
  (*(code *)*puVar4)(plVar1,puVar4[1]);
LAB_07703e84:
  (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
  return;
}

