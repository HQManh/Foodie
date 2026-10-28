// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$MergeItem
// address: 0x76e01a4
// body: available
// range: 0x76e01a4-0x76e050f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e04f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e04fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e0500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e0504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e050c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076e0508) */

void Newtonsoft_Json_Linq_JObject__MergeItem(long param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_095227d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a928);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187210);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_091a9848);
    DAT_095227d8 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
      DAT_09187220) {
    return;
  }
  plVar2 = (long *)Newtonsoft_Json_Linq_JObject__GetEnumerator(param_2);
LAB_076e0298:
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076e02ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_076e02ec:
    uVar9 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_076e04b0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a928) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076e0350;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a928,0);
LAB_076e0350:
    auVar12 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    plVar5 = auVar12._8_8_;
    if (param_3 == 0) {
      uVar6 = 4;
    }
    else {
      uVar6 = *(undefined4 *)(param_3 + 0x18);
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = Newtonsoft_Json_Linq_JObject__Property(param_1,auVar12._0_8_,uVar6);
    if (lVar7 != 0) {
      if (plVar5 != (long *)0x0) {
        if (*(long *)(lVar7 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar11 = *(long **)(*(long *)(lVar7 + 0x58) + 0x10);
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          if ((*(byte *)(DAT_09187210 + 0x130) <= *(byte *)(lVar8 + 0x130)) &&
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09187210 + 0x130) * 8 + -8) ==
              DAT_09187210)) {
            iVar1 = (**(code **)(lVar8 + 0x228))(plVar11,*(undefined8 *)(lVar8 + 0x230));
            uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
            if (iVar1 == (int)uVar4) {
              Newtonsoft_Json_Linq_JContainer__ValidateContent(uVar4,plVar5);
              (**(code **)(*plVar11 + 0x6f8))
                        (plVar11,plVar5,param_3,*(undefined8 *)(*plVar11 + 0x700));
              goto LAB_076e0298;
            }
          }
        }
        uVar9 = Newtonsoft_Json_Linq_JObject__IsNull(plVar5);
        if (((uVar9 & 1) == 0) || ((param_3 != 0 && (*(int *)(param_3 + 0x14) == 1)))) {
          Newtonsoft_Json_Linq_JProperty__set_Value(lVar7,plVar5);
        }
      }
      goto LAB_076e0298;
    }
    Newtonsoft_Json_Linq_JObject__Add(param_1,auVar12._0_8_,plVar5);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_076e04cc;
    }
  }
LAB_076e04b0:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_076e04cc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

