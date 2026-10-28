// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$PlayGather
// address: 0x41e0898
// body: available
// range: 0x41e0898-0x41e0e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e0e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e0e58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__PlayGather
               (long param_1,long param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStack_208 [136];
  undefined1 auStack_180 [136];
  undefined1 auStack_f8 [136];
  
  if ((DAT_09516aec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c3400);
    FUN_03f5c2a4(&DAT_09181918);
    FUN_03f5c2a4(&DAT_091b2120);
    FUN_03f5c2a4(&DAT_091b2128);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091b2138);
    FUN_03f5c2a4(&DAT_091ac6d0);
    FUN_03f5c2a4(&DAT_091b4cc8);
    FUN_03f5c2a4(&DAT_0918e6c8);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091e5c50);
    FUN_03f5c2a4(&DAT_0918e688);
    DAT_09516aec = 1;
  }
  memset(auStack_f8,0,0x88);
  lVar5 = thunk_FUN_03f9944c(DAT_0918e688);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass101_0___ctor(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_1);
    plVar15 = (long *)(lVar5 + 0x18);
    *plVar15 = param_2;
    thunk_FUN_03f5d7b8(plVar15,param_2);
    plVar13 = (long *)(lVar5 + 0x28);
    *plVar13 = param_4;
    *(undefined4 *)(lVar5 + 0x20) = param_3;
    thunk_FUN_03f5d7b8(plVar13,param_4);
    uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__DishOf
                      (param_1,*plVar15,*(undefined4 *)(lVar5 + 0x20));
    uVar6 = AnhPD_FoodOrder_AutoCompleteOrderFx__SpawnPlate(param_1,uVar4);
    *(undefined8 *)(param_1 + 0xc0) = uVar6;
    thunk_FUN_03f5d7b8();
    lVar7 = *(long *)(DAT_091b4cc8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      TrungKienPack_Particle_PoolingParticle__Spawn(auStack_180,**(long **)(lVar7 + 0xb8),7,0);
      memcpy(auStack_f8,auStack_180,0x88);
      if (*(int *)(DAT_09181918 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar11 = *(undefined4 **)(DAT_09181918 + 0xb8);
      uVar19 = puVar11[2];
      TrungKienPack_Particle_ParticleRequest__At(auStack_208,*puVar11,puVar11[1],auStack_f8,0);
      memcpy(auStack_f8,auStack_208,0x88);
      uVar6 = TrungKienPack_Particle_ParticleRequest__Play(auStack_f8,0);
      *(undefined8 *)(param_1 + 200) = uVar6;
      thunk_FUN_03f5d7b8();
      if (*plVar15 != 0) {
        uVar6 = AnhPD_FoodOrder_FCustomerLine__GetOrderIds(*plVar15,*(undefined4 *)(lVar5 + 0x20),0)
        ;
        lVar7 = AnhPD_FoodOrder_AutoCompleteOrderFx__CollapseRanks
                          (param_1,*(undefined8 *)(lVar5 + 0x28),uVar6,uVar4);
        if (*(long *)(lVar5 + 0x28) != 0) {
          lVar12 = *(long *)(param_1 + 0xa0);
          if (lVar12 != 0) {
            iVar1 = *(int *)(lVar12 + 0x18);
            uVar2 = *(uint *)(*(long *)(lVar5 + 0x28) + 0x18);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (0 < iVar1) {
              System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
            }
            if (0 < (int)uVar2) {
              uVar16 = 0;
              fVar18 = (float)(int)uVar2;
              do {
                if ((*plVar13 == 0) ||
                   (lVar12 = FUN_057e0998(*plVar13,uVar16,DAT_091ac6d0), lVar12 == 0))
                goto LAB_041e0e54;
                AnhPD_FoodOrder_DragItemBase__SetSortingOrder(lVar12,0x29,0);
                lVar17 = *(long *)(param_1 + 0xa0);
                lVar8 = thunk_FUN_03f9944c(DAT_0918e6c8);
                AnhPD_FoodOrder_AutoCompleteOrderFx_Orbiter___ctor(lVar8,0);
                if (lVar8 == 0) goto LAB_041e0e54;
                *(long *)(lVar8 + 0x10) = lVar12;
                thunk_FUN_03f5d7b8((long *)(lVar8 + 0x10),lVar12);
                lVar9 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar12,0);
                if (lVar9 == 0) goto LAB_041e0e54;
                uVar4 = UnityEngine_Transform__get_position(lVar9,0);
                *(undefined4 *)(lVar8 + 0x18) = uVar4;
                *(float *)(lVar8 + 0x1c) = fVar18;
                *(undefined4 *)(lVar8 + 0x20) = uVar19;
                lVar12 = AnhPD_FoodOrder_DragItemBase__get_Tf(lVar12,0);
                if (lVar12 == 0) goto LAB_041e0e54;
                uVar4 = UnityEngine_Transform__get_localScale(lVar12,0);
                *(undefined4 *)(lVar8 + 0x24) = uVar4;
                *(float *)(lVar8 + 0x28) = fVar18;
                *(undefined4 *)(lVar8 + 0x2c) = uVar19;
                *(ulong *)(lVar8 + 0x30) =
                     CONCAT44((float)(int)uVar16 * 0.12 + 0.1,
                              ((float)(int)uVar16 * 360.0) / (float)(int)uVar2);
                lVar12 = DAT_091b2120;
                if (lVar17 == 0) goto LAB_041e0e54;
                lVar9 = *(long *)(lVar17 + 0x10);
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_041e0e54;
                uVar3 = *(uint *)(lVar17 + 0x18);
                if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar3 + 1;
                  plVar15 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
                  *plVar15 = lVar8;
                  thunk_FUN_03f5d7b8(plVar15,lVar8);
                }
                else {
                  FUN_057e0c68(lVar17,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                uVar16 = uVar16 + 1;
              } while (uVar2 != uVar16);
            }
            fVar18 = (float)(int)(uVar2 - 1) * 0.12 + 0.1 + 0.3 + 0.15;
            *(float *)(param_1 + 0xb8) = fVar18;
            if (0 < (int)uVar2) {
              uVar14 = 0;
              do {
                if ((*(long *)(param_1 + 0xa0) == 0) ||
                   (lVar12 = FUN_057e0998(*(long *)(param_1 + 0xa0),uVar14 & 0xffffffff,DAT_091b2138
                                         ), lVar7 == 0)) goto LAB_041e0e54;
                if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                if (lVar12 == 0) goto LAB_041e0e54;
                lVar8 = uVar14 * 4;
                uVar14 = uVar14 + 1;
                fVar18 = *(float *)(param_1 + 0xb8);
                *(float *)(lVar12 + 0x38) = fVar18 + (float)*(int *)(lVar7 + 0x20 + lVar8) * 0.06;
              } while (uVar2 != uVar14);
            }
            uVar6 = DAT_0917f008;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            fVar18 = (float)(int)(uVar2 - 1) * 0.06 + fVar18 + 0.5;
            *(float *)(param_1 + 0xbc) = fVar18;
            uVar6 = thunk_FUN_03f9944c(uVar6);
            FUN_063be1d4(uVar6,param_1,DAT_091c3400,0);
            uVar6 = DG_Tweening_DOVirtual__Float(0,fVar18,fVar18,uVar6,0);
            uVar6 = FUN_04d95e8c(uVar6,1,DAT_091dbee0);
            uVar10 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar10,lVar5,DAT_091e5c50,0);
            uVar6 = FUN_04d956bc(uVar6,uVar10,DAT_091dbd28);
            *(undefined8 *)(param_1 + 0xa8) = uVar6;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar6);
            return;
          }
        }
      }
    }
  }
LAB_041e0e54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

