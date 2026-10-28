// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$MergeAndServe
// address: 0x41e3ac4
// body: available
// range: 0x41e3ac4-0x41e42af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e428c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e4298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e429c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e42a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e42a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e42a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e42ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__MergeAndServe
               (long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_09516af1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091e5c60);
    FUN_03f5c2a4(&DAT_091e5c68);
    FUN_03f5c2a4(&DAT_0918e698);
    FUN_03f5c2a4(&DAT_091f86e8);
    FUN_03f5c2a4(&DAT_09217c08);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516af1 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_84[0] = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0918e698);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass108_0___ctor(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_1);
    plVar13 = (long *)(lVar5 + 0x18);
    *plVar13 = param_2;
    thunk_FUN_03f5d7b8(plVar13,param_2);
    *(undefined4 *)(lVar5 + 0x30) = param_3;
    AnhPD_FoodOrder_AutoCompleteOrderFx__StopTornado(param_1);
    if (param_4 != 0) {
      uVar1 = *(undefined4 *)(param_4 + 0x18);
      lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0478(lVar6,uVar1,DAT_091b0568);
      plVar14 = (long *)(lVar5 + 0x28);
      *plVar14 = lVar6;
      thunk_FUN_03f5d7b8(plVar14,lVar6);
      lVar6 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(lVar6,0);
      FUN_057e185c(&local_a0,param_4,DAT_091ac6b0);
      local_70 = local_90;
      puStack_78 = puStack_98;
      local_80 = local_a0;
      local_a0 = 0;
      puStack_98 = &local_80;
LAB_041e3d38:
      do {
        uVar7 = FUN_071bd28c(&local_80,DAT_091a2a58);
        plVar3 = local_70;
        if ((uVar7 & 1) == 0) goto LAB_041e3ec8;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(plVar3,0);
        if ((uVar7 & 1) != 0) {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar15 = *plVar14;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          lVar9 = DAT_091b0570;
          if (lVar15 != 0) {
            lVar10 = *(long *)(lVar15 + 0x10);
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar2 = *(uint *)(lVar15 + 0x18);
              if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar15,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar4 = System_Text_StringBuilder__get_Length(lVar6,0);
              puVar12 = &DAT_091f86e8;
              if (iVar4 < 1) {
                puVar12 = &DAT_091f5700;
              }
              lVar9 = System_Text_StringBuilder__Append(lVar6,*puVar12,0);
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar8 = AnhPD_FoodOrder_PieceLedger__Describe(plVar3,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar8,uVar8);
              }
              System_Text_StringBuilder__Append(lVar9,uVar8,0);
              lVar9 = *plVar13;
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar7 = UnityEngine_Object__op_Implicit(lVar9,0);
              if ((uVar7 & 1) == 0) {
                uVar8 = 0;
              }
              else {
                if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar8 = UnityEngine_Object__GetName(*plVar13,0);
              }
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              AnhPD_FoodOrder_PieceLedger__Finish(plVar3,5,uVar8,0,0);
              if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              AnhPD_FoodOrder_MessyController__DespawnItem(**(long **)(DAT_091881a0 + 0xb8),plVar3);
              goto LAB_041e3d38;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while( true );
    }
  }
LAB_041e42a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_041e3ec8:
  FUN_071bd288(&local_80,DAT_091a2a50);
  AnhPD_FoodOrder_GlobalAudio__Play(0x3f800000,3,0);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (uVar7 = AnhPD_FoodOrder_ServeTicket__get_IsValid(*(long *)(param_1 + 0x38),0),
     (uVar7 & 1) == 0)) {
LAB_041e4190:
    AnhPD_FoodOrder_AutoCompleteOrderFx__ReturnSpent(param_1,*plVar14);
    AnhPD_FoodOrder_AutoCompleteOrderFx__Finish(param_1);
    return;
  }
  if (*plVar13 != 0) {
    uVar7 = AnhPD_FoodOrder_FCustomerLine__get_IsCustomerReady(*plVar13,0);
    if ((uVar7 & 1) == 0) goto LAB_041e4190;
    if (*plVar13 != 0) {
      auVar19 = AnhPD_FoodOrder_FCustomerLine__GetOrderIds(*plVar13,*(undefined4 *)(lVar5 + 0x30),0)
      ;
      uVar8 = System_String__Format(DAT_09217c08,lVar6,0);
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189140);
      }
      local_84[0] = AnhPD_FoodOrder_PieceLedger__From(6,uVar8,0,0);
      puStack_98 = (undefined8 *)local_84;
      local_a0 = 0;
      lVar6 = **(long **)(DAT_091881a0 + 0xb8);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar6 + 0x138);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar11 = *(undefined4 **)(DAT_09181918 + 0xb8);
      uVar8 = AnhPD_FoodOrder_SpawnService__SpawnAndGetDragItem
                        (*puVar11,puVar11[1],puVar11[2],lVar6,auVar19._8_8_,0,0,0,0);
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      thunk_FUN_03f5d7b8();
      AnhPD_FoodOrder_PieceLedger_Scope__Dispose(local_84,0);
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_AutoCompleteOrderFx__PrepareFlyer(uVar8);
      plVar13 = *(long **)(lVar5 + 0x20);
      if (plVar13 != (long *)0x0) {
        if (((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
            (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8)
             == DAT_09184728)) &&
           (uVar7 = System_String__op_Inequality(auVar19._0_8_,auVar19._8_8_,0), (uVar7 & 1) != 0))
        {
          (**(code **)(*plVar13 + 600))(plVar13,auVar19._0_8_,*(undefined8 *)(*plVar13 + 0x260));
        }
      }
      plVar13 = (long *)(lVar5 + 0x38);
      *plVar13 = *(long *)(param_1 + 0xc0);
      thunk_FUN_03f5d7b8(plVar13);
      lVar6 = *plVar13;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(lVar6,0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar5 + 0x20) != 0) {
          uVar8 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(lVar5 + 0x20),0);
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          uVar16 = NEON_fmov(0x3e800000,4);
          uVar18 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
          fVar17 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
          uVar8 = DG_Tweening_ShortcutExtensions__DOPunchScale
                            (CONCAT44(fVar17,(float)uVar18 * (float)uVar16),fVar17,
                             *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.25,0x3e800000,
                             0x3f800000,uVar8,10,0);
          uVar16 = thunk_FUN_03f9944c(DAT_0918c148);
          puVar12 = &DAT_091e5c60;
LAB_041e425c:
          DG_Tweening_TweenCallback___ctor(uVar16,lVar5,*puVar12,0);
          FUN_04d956bc(uVar8,uVar16,DAT_091dbd28);
          return;
        }
      }
      else if (*plVar13 != 0) {
        AnhPD_FoodOrder_ServePlate__Adopt(*plVar13,*(undefined8 *)(lVar5 + 0x20),0,0,0);
        if (*(long *)(lVar5 + 0x20) != 0) {
          AnhPD_FoodOrder_DragItemBase__SetSortingOrder(*(long *)(lVar5 + 0x20),0x29,0);
          if (*plVar13 != 0) {
            uVar8 = UnityEngine_Component__get_transform(*plVar13,0);
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            uVar16 = NEON_fmov(0x3e800000,4);
            uVar18 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
            fVar17 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar16 >> 0x20);
            uVar8 = DG_Tweening_ShortcutExtensions__DOPunchScale
                              (CONCAT44(fVar17,(float)uVar18 * (float)uVar16),fVar17,
                               *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.25,0x3e800000,
                               0x3f800000,uVar8,10,0);
            uVar16 = thunk_FUN_03f9944c(DAT_0918c148);
            puVar12 = &DAT_091e5c68;
            goto LAB_041e425c;
          }
        }
      }
    }
  }
  goto LAB_041e42a4;
}

