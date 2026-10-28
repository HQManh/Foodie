// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$PruneStaleResultAnims
// address: 0x40c431c
// body: available
// range: 0x40c431c-0x40c46c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c46b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c46b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c46b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c46bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c46c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__PruneStaleResultAnims(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09515f79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee60);
    FUN_03f5c2a4(&DAT_0919ee70);
    FUN_03f5c2a4(&DAT_0919ee78);
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a64b0);
    FUN_03f5c2a4(&DAT_091a64b8);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a64c0);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091a9230);
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe20);
    FUN_03f5c2a4(&DAT_091afe28);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f79 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar3 = FUN_06f81e90(*(long *)(param_1 + 0x40),DAT_0919ee70);
    if (iVar3 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar3) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar3,0);
      }
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar6 = FUN_06f81ea0(*(long *)(param_1 + 0x40),DAT_0919ee78), lVar6 != 0)) {
        FUN_055e9a20(&local_b8,lVar6,DAT_091a9230);
        local_70 = local_a8;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_80;
LAB_040c44f8:
        uVar4 = FUN_0726df54(&local_80,DAT_091a64b8);
        lVar6 = local_70;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
          if ((uVar4 & 1) != 0) goto code_r0x040c452c;
          goto LAB_040c4544;
        }
        FUN_0726df50(&local_80,DAT_091a64b0);
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_057e185c(&local_b8,*(long *)(param_1 + 0x48),DAT_091afe30);
          local_90 = local_a8;
          puStack_98 = puStack_b0;
          local_a0 = local_b8;
          local_b8 = 0;
          puStack_b0 = &local_a0;
          while( true ) {
            uVar4 = FUN_071bd28c(&local_a0,DAT_091a4258);
            lVar6 = local_90;
            if ((uVar4 & 1) == 0) {
              FUN_071bd288(&local_a0,DAT_091a4250);
              return;
            }
            if (*(long *)(param_1 + 0x40) == 0) break;
            FUN_06f836dc(*(long *)(param_1 + 0x40),local_90,DAT_0919ee60);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
            if ((uVar4 & 1) != 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              AnhPD_FoodOrder_ServePlate__SetMergeAnimLifted(lVar6,0);
              plVar8 = *(long **)(lVar6 + 0xa8);
              if (plVar8 != (long *)0x0) {
                if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8
                             + -8) == DAT_09184728)) {
                  AnhPD_FoodOrder_FlexibleDragItem__ResumeVisual(plVar8,0);
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x040c452c:
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = FUN_057e1004(*(long *)(param_1 + 0x90),lVar6,DAT_091afe28);
  if ((uVar4 & 1) == 0) {
LAB_040c4544:
    lVar2 = DAT_091afe10;
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar8 = lVar6;
          thunk_FUN_03f5d7b8(plVar8,lVar6);
        }
        else {
          FUN_057e0c68(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto LAB_040c44f8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_040c44f8;
}

