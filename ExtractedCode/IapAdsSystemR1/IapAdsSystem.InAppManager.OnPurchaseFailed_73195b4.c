// rea decompile_all
// name: IapAdsSystem.InAppManager$$OnPurchaseFailed
// address: 0x73195b4
// body: available
// range: 0x73195b4-0x731993f inclusive
// range: 0x7319a40-0x7319a5f inclusive
// range: 0x7319b3c-0x7319bd3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731993c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7319bd0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager__OnPurchaseFailed(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  long **local_88;
  undefined4 local_78;
  long local_70;
  long *local_68;
  
  if ((DAT_0952055c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a03a8);
    FUN_03f5c2a4(&DAT_091a03b0);
    FUN_03f5c2a4(&DAT_09185728);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a390);
    FUN_03f5c2a4(&DAT_0917aa30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09189800);
    FUN_03f5c2a4(&DAT_09189828);
    FUN_03f5c2a4(&DAT_0921b508);
    DAT_0952055c = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_78 = 0;
  if ((param_2 != 0) && (plVar8 = *(long **)(param_2 + 0x10), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185728) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_073196cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185728,0);
LAB_073196cc:
    plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a390) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07319734;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a390,0);
LAB_07319734:
      local_68 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
      local_88 = &local_68;
      local_90 = 0;
      do {
        plVar8 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_68;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_073197cc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_073197cc:
        uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        plVar8 = local_68;
        if ((uVar6 & 1) == 0) {
          plVar8 = *local_88;
          if (plVar8 == (long *)0x0) goto LAB_07319ba8;
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_07319b80;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_07319b68;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_68;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917aa30) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07319830;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aa30,0);
LAB_07319830:
        lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_Purchasing_Product__get_definition(*(long *)(lVar4 + 0x10),0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(param_1 + 0x80);
        uVar9 = *(undefined8 *)(lVar4 + 0x18);
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar9,*(undefined8 *)(lVar5 + 0x28));
        }
        local_a8 = DAT_09189828;
        local_98 = *(undefined4 *)(param_2 + 0x20);
        uStack_a0 = 0xffffffffffffffff;
        uVar3 = System_Enum__ToString(&local_a8,0);
        IapAdsSystem_InAppManager__TrackIap(uVar9,DAT_0921b508,uVar3);
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = FUN_06fd9fbc(*(long *)(param_1 + 0x50),uVar9,&local_70,DAT_091a03b0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd9970(*(long *)(param_1 + 0x50),uVar9,DAT_091a03a8);
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *(long *)(local_70 + 0x18);
          if (lVar4 != 0) {
            uVar1 = *(undefined4 *)(param_2 + 0x20);
            lVar5 = thunk_FUN_03f9944c(DAT_09189800);
            System_Object___ctor(lVar5,0);
            *(undefined8 *)(lVar5 + 0x18) = 0;
            *(undefined4 *)(lVar5 + 0x10) = 4;
            *(undefined4 *)(lVar5 + 0x14) = uVar1;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),0);
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),lVar5,*(undefined8 *)(lVar4 + 0x28));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_07319b68:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_07319b9c;
    }
  }
LAB_07319b80:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_07319b9c:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
LAB_07319ba8:
  if (local_90 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

