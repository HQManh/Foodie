// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$EnsureAnchorLookup
// address: 0x40b8bac
// body: available
// range: 0x40b8bac-0x40b9043 inclusive
// range: 0x40b9048-0x40b90c3 inclusive
// range: 0x40b90c8-0x40b90cb inclusive
// range: 0x40b9118-0x40b9153 inclusive
// range: 0x40b9164-0x40b917b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b9040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b90c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b90c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9170 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9178 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040b90bc) */

void AnhPD_FoodOrder_RecipeConfigSO__EnsureAnchorLookup(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long local_a0;
  long *plStack_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09515f38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f1f8);
    FUN_03f5c2a4(&DAT_0919f218);
    FUN_03f5c2a4(&DAT_09176968);
    FUN_03f5c2a4(&DAT_091a3f98);
    FUN_03f5c2a4(&DAT_091a3fa0);
    FUN_03f5c2a4(&DAT_091a3fa8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05a0);
    FUN_03f5c2a4(&DAT_091af668);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917e070);
    FUN_03f5c2a4(&DAT_091eed98);
    FUN_03f5c2a4(&DAT_09193950);
    DAT_09515f38 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  plVar9 = (long *)(param_1 + 0xa0);
  local_70 = 0;
  local_88 = (long *)0x0;
  if (*plVar9 == 0) {
    uVar1 = thunk_FUN_03f9944c(DAT_09176968);
    FUN_06fd76bc(uVar1,DAT_0919f1f8);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    thunk_FUN_03f5d7b8(plVar9,uVar1);
    lVar2 = thunk_FUN_03f9944c(DAT_09179ee0);
    FUN_053eb530(lVar2,DAT_091a8698);
    plVar8 = (long *)(param_1 + 0xa8);
    *plVar8 = lVar2;
    thunk_FUN_03f5d7b8(plVar8,lVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_057e185c(&local_a0,*(long *)(param_1 + 0x28),DAT_091af668);
      uStack_78 = plStack_98;
      local_80 = local_a0;
      local_70 = local_90;
      plStack_98 = &local_80;
      local_a0 = 0;
      while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3fa0), lVar6 = local_70, lVar2 = local_a0,
            (uVar3 & 1) != 0) {
        if (((local_70 != 0) &&
            (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(local_70 + 0x10),0),
            (uVar3 & 1) == 0)) && (lVar2 = *(long *)(lVar6 + 0x20), lVar2 != 0)) {
          if (*(int *)(DAT_09193950 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar5 = *(undefined8 **)(DAT_09193950 + 0xb8);
          lVar10 = puVar5[3];
          if (lVar10 == 0) {
            if (*(int *)(DAT_09193950 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar5 = *(undefined8 **)(DAT_09193950 + 0xb8);
            }
            uVar1 = *puVar5;
            lVar10 = thunk_FUN_03f9944c(DAT_0917e070);
            FUN_05d78cfc(lVar10,uVar1,DAT_091eed98,0);
            plVar4 = (long *)(*(long *)(DAT_09193950 + 0xb8) + 0x18);
            *plVar4 = lVar10;
            thunk_FUN_03f5d7b8(plVar4,lVar10);
          }
          lVar2 = FUN_057e13d4(lVar2,lVar10,DAT_091b05a0);
          if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 0)) {
            if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8440(*plVar9,*(undefined8 *)(lVar6 + 0x10),lVar2,DAT_0919f218);
            plVar4 = (long *)AnhPD_FoodOrder_RecipeConfig__AnchorChoices(lVar6);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917a768) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_040b8f30;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a768,0);
LAB_040b8f30:
            plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
joined_r0x040b8f4c:
            local_88 = plVar4;
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar3 != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_040b8f9c;
                }
                uVar3 = uVar3 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_040b8f9c:
            uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            plVar4 = local_88;
            if ((uVar3 & 1) != 0) {
              if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *local_88;
              uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_0917ae48) {
                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_040b9000;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae48,0);
LAB_040b9000:
              uVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              uVar3 = FUN_057e1004(lVar2,uVar1,DAT_091b0590);
              plVar4 = local_88;
              if ((uVar3 & 1) == 0) {
                if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_053ec72c(*plVar8,uVar1,DAT_091a86b8);
                plVar4 = local_88;
              }
              goto joined_r0x040b8f4c;
            }
            if (local_88 != (long *)0x0) {
              lVar2 = *local_88;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == DAT_09185a58) {
                    puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_040b90ac;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_040b90ac:
              (*(code *)*puVar5)(plVar4,puVar5[1]);
            }
          }
        }
      }
      FUN_071bd288(plStack_98,DAT_091a3f98);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar2);
      }
    }
  }
  return;
}

