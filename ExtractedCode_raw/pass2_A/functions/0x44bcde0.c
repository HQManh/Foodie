// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$AnimatePlateMoves
// address: 0x44bcde0
// body: available
// range: 0x44bcde0-0x44bd8eb inclusive
// range: 0x44bd8f0-0x44bdb33 inclusive
// range: 0x44bdb38-0x44bdbbb inclusive
// range: 0x44bdbc0-0x44bdbc3 inclusive
// range: 0x44bdbc8-0x44bdbcb inclusive
// range: 0x44bdbd0-0x44bdbd3 inclusive
// range: 0x44bdbd8-0x44bdbdb inclusive
// range: 0x44bdc7c-0x44be3a3 inclusive
// range: 0x44be538-0x44be53f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bd380 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bd8e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdb30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdbb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdbc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdbc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdbd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bdbd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44be33c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44be340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44be344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44be348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044be35c) */
/* WARNING: Removing unreachable block (ram,0x044bd970) */
/* WARNING: Removing unreachable block (ram,0x044be538) */
/* WARNING: Removing unreachable block (ram,0x044bdcfc) */
/* WARNING: Removing unreachable block (ram,0x044be368) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__AnimatePlateMoves
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 local_250;
  long lStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  long lStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 *puStack_208;
  undefined8 local_1f0;
  undefined8 *puStack_1e8;
  undefined8 local_1d0;
  undefined8 *puStack_1c8;
  undefined8 local_1b0;
  long **pplStack_1a8;
  undefined8 local_1a0;
  undefined8 *puStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 *puStack_178;
  undefined8 local_170;
  long local_168;
  long **local_160;
  long local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  
  if ((DAT_0951824e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5860);
    FUN_03f5c2a4(&DAT_091c65e0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_091a0038);
    FUN_03f5c2a4(&DAT_0919fe98);
    FUN_03f5c2a4(&DAT_0919f570);
    FUN_03f5c2a4(&DAT_0919fef0);
    FUN_03f5c2a4(&DAT_0919f578);
    FUN_03f5c2a4(&DAT_0919f580);
    FUN_03f5c2a4(&DAT_0919ef08);
    FUN_03f5c2a4(&DAT_0919f588);
    FUN_03f5c2a4(&DAT_0919ff00);
    FUN_03f5c2a4(&DAT_09176a28);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_091c9df8);
    FUN_03f5c2a4(&DAT_091cb068);
    FUN_03f5c2a4(&DAT_091a6660);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6678);
    FUN_03f5c2a4(&DAT_091a6680);
    FUN_03f5c2a4(&DAT_091a6668);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6688);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a6670);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_091786d0);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a460);
    FUN_03f5c2a4(&DAT_0917a260);
    FUN_03f5c2a4(&DAT_0917ab08);
    FUN_03f5c2a4(&DAT_0917a8a8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9248);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_091acd50);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc78);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbd48);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091e6e58);
    FUN_03f5c2a4(&DAT_091e6e60);
    FUN_03f5c2a4(&DAT_091e6e68);
    FUN_03f5c2a4(&DAT_091e7080);
    FUN_03f5c2a4(&DAT_0918f0d0);
    FUN_03f5c2a4(&DAT_091e7088);
    FUN_03f5c2a4(&DAT_0918f0d8);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_091be9e8);
    DAT_0951824e = 1;
  }
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  puStack_128 = (undefined8 *)0x0;
  local_130 = 0;
  lStack_118 = 0;
  local_120 = 0;
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  puStack_148 = (undefined8 *)0x0;
  local_158 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f0d0);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass223_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_4);
    lVar3 = thunk_FUN_03f9944c(DAT_09176a28);
    FUN_06f8f514(lVar3,DAT_0919f570);
    if (param_5 != (long *)0x0) {
      lVar10 = *param_5;
      uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_0917a460) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_044bd1c0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917a460,0);
LAB_044bd1c0:
      plVar5 = (long *)(*(code *)*puVar4)(param_5,puVar4[1]);
      local_160 = &local_98;
      local_168 = 0;
      do {
        local_98 = plVar5;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *plVar5;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044bd248;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044bd248:
        uVar14 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        plVar5 = local_98;
        if ((uVar14 & 1) == 0) {
          if (local_98 == (long *)0x0) goto LAB_044bd3f4;
          lVar10 = *local_98;
          uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar14 == 0) goto LAB_044bd3cc;
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_044bd3b4;
        }
        if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *local_98;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917ab08) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044bd2ac;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab08,0);
LAB_044bd2ac:
        (*(code *)*puVar4)(&local_238,plVar5,puVar4[1]);
        uVar17 = uStack_224;
        uVar19 = local_228;
        CookOrder_Cooking_Implement_CookingGameplayPresentation__PlateAddress
                  (&local_238,(ulong)uStack_230 & 0xffffffff,uStack_230._4_4_);
        local_a0 = CONCAT44(uStack_224,local_228);
        puStack_a8 = uStack_230;
        local_b0 = local_238;
        CookOrder_Cooking_Implement_CookingGameplayPresentation__PlateAddress
                  (&local_238,uVar19,uVar17);
        local_c0 = CONCAT44(uStack_224,local_228);
        puStack_c8 = uStack_230;
        local_d0 = local_238;
        puStack_178 = puStack_a8;
        local_180 = local_b0;
        local_170 = local_a0;
        uVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_180);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar6,uVar6);
        }
        puStack_88 = puStack_a8;
        local_90 = local_b0;
        local_80 = local_a0;
        FUN_06f90304(lVar3,uVar6,&local_90,DAT_0919f588);
        puStack_198 = puStack_c8;
        local_1a0 = local_d0;
        local_190 = local_c0;
        uVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_1a0);
        puStack_88 = puStack_c8;
        local_90 = local_d0;
        local_80 = local_c0;
        FUN_06f90304(lVar3,uVar6,&local_90,DAT_0919f588);
        plVar5 = local_98;
      } while( true );
    }
  }
  goto LAB_044be37c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_044bd3b4:
    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_044bd3e8;
    }
  }
LAB_044bd3cc:
  puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_044bd3e8:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_044bd3f4:
  if (lVar3 != 0) {
    uVar6 = FUN_06f8ffcc(lVar3,DAT_0919f578);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
    }
    puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar10 = puVar4[0x2e];
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
        puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar16 = *puVar4;
      lVar10 = thunk_FUN_03f9944c(DAT_091790b8);
      FUN_05324070(lVar10,uVar16,DAT_091e6e58,0);
      lVar11 = *(long *)(DAT_0918f030 + 0xb8);
      *(long *)(lVar11 + 0x170) = lVar10;
      thunk_FUN_03f5d7b8(lVar11 + 0x170,lVar10);
    }
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
    }
    puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar11 = puVar4[0x2f];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
        puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar16 = *puVar4;
      lVar11 = thunk_FUN_03f9944c(DAT_091790b8);
      FUN_05324070(lVar11,uVar16,DAT_091e6e60,0);
      lVar12 = *(long *)(DAT_0918f030 + 0xb8);
      *(long *)(lVar12 + 0x178) = lVar11;
      thunk_FUN_03f5d7b8(lVar12 + 0x178,lVar11);
    }
    lVar10 = FUN_04b05274(uVar6,lVar10,lVar11,DAT_091cb068);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
    }
    puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar11 = puVar4[0x30];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
        puVar4 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar11 = thunk_FUN_03f9944c(DAT_091786d0);
      FUN_05312fb0(lVar11,uVar6,DAT_091e6e68,0);
      lVar12 = *(long *)(DAT_0918f030 + 0xb8);
      *(long *)(lVar12 + 0x180) = lVar11;
      thunk_FUN_03f5d7b8(lVar12 + 0x180,lVar11);
    }
    plVar5 = (long *)FUN_04ae6c3c(param_5,lVar11,DAT_091c9df8);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_0917a260) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_044bd63c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a260,0);
LAB_044bd63c:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      local_160 = &local_d8;
      local_168 = 0;
joined_r0x044bd654:
      local_d8 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *plVar5;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_044bd6cc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044bd6cc:
      uVar14 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar5 = local_d8;
      if ((uVar14 & 1) != 0) {
        if (local_d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_d8;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917a8a8) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044bd738;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_d8,DAT_0917a8a8,0);
LAB_044bd738:
        plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        lVar11 = thunk_FUN_03f9944c(DAT_09176c28);
        FUN_06fd7798(lVar11,lVar10,DAT_0919fe98);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar12 = *plVar5;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917a460) {
              puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044bd7c8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a460,0);
LAB_044bd7c8:
        plVar7 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        local_1b0 = 0;
        pplStack_1a8 = &local_98;
        do {
          local_98 = plVar7;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_044bd830;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044bd830:
          uVar14 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          plVar7 = local_98;
          if ((uVar14 & 1) == 0) goto LAB_044bd8f0;
          if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar12 = *local_98;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == DAT_0917ab08) {
                puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_044bd894;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab08,0);
LAB_044bd894:
          (*(code *)*puVar4)(&local_238,plVar7,puVar4[1]);
          CookOrder_Cooking_Implement_CookingGameplayPresentation__PlateAddress
                    (&local_238,(ulong)uStack_230 & 0xffffffff,uStack_230._4_4_);
          puStack_1c8 = uStack_230;
          local_1d0 = local_238;
          uVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_1d0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar6,uVar6);
          }
          FUN_06fd8440(lVar10,uVar6,0,DAT_0919ff00);
          plVar7 = local_98;
        } while( true );
      }
      plVar5 = *local_160;
      if (plVar5 == (long *)0x0) goto LAB_044bdcec;
      lVar11 = *plVar5;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 == 0) goto LAB_044bdcc4;
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_044bdcac;
    }
  }
  goto LAB_044be37c;
LAB_044bd8f0:
  if (local_98 != (long *)0x0) {
    lVar12 = *local_98;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_044bd958;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_044bd958:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  lVar12 = *plVar5;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == DAT_0917a460) {
        puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_044bd9cc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917a460,0);
LAB_044bd9cc:
  plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  local_1b0 = 0;
  pplStack_1a8 = &local_98;
  do {
    local_98 = plVar5;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *plVar5;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_044bda34;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044bda34:
    uVar14 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar7 = local_98;
    if ((uVar14 & 1) == 0) break;
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar12 = *local_98;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_0917ab08) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_044bda98;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_0917ab08,0);
LAB_044bda98:
    (*(code *)*puVar4)(&local_238,plVar7,puVar4[1]);
    puVar4 = uStack_230;
    uVar19 = uStack_230._4_4_;
    CookOrder_Cooking_Implement_CookingGameplayPresentation__PlateAddress
              (&local_238,local_228,uStack_224);
    puStack_1e8 = uStack_230;
    local_1f0 = local_238;
    uVar6 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_1f0);
    CookOrder_Cooking_Implement_CookingGameplayPresentation__PlateAddress
              (&local_238,(ulong)puVar4 & 0xffffffff,uVar19);
    puStack_208 = uStack_230;
    local_210 = local_238;
    uVar16 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_210);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar16,uVar16);
    }
    uVar16 = FUN_06fd83d4(lVar11,uVar16,DAT_0919fef0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fd8440(lVar10,uVar6,uVar16,DAT_0919ff00);
    plVar5 = local_98;
  } while( true );
  plVar5 = local_d8;
  if (local_98 != (long *)0x0) {
    lVar11 = *local_98;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_044bdb9c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_98,DAT_09185a58,0);
LAB_044bdb9c:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
    plVar5 = local_d8;
  }
  goto joined_r0x044bd654;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_044bdcac:
    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_044bdce0;
    }
  }
LAB_044bdcc4:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_044bdce0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_044bdcec:
  if (local_168 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548(local_168);
  }
  lVar11 = FUN_06f90128(lVar3,DAT_0919f580);
  if (lVar11 != 0) {
    FUN_0653ff18(&local_238,lVar11,DAT_091be9e8);
    local_100 = local_238;
    local_f0 = CONCAT44(uStack_224,local_228);
    local_238 = 0;
    puStack_f8 = uStack_230;
    lStack_e8 = lStack_220;
    local_e0 = local_218;
    uStack_230 = &local_100;
    while (uVar14 = FUN_0727025c(&local_100,DAT_091a6680), (uVar14 & 1) != 0) {
      lStack_248 = lStack_e8;
      local_250 = local_f0;
      local_240 = local_e0;
      CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                (param_4,&local_250,&uStack_108);
    }
    FUN_07270258(&local_100,DAT_091a6678);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = DG_Tweening_DOTween__Sequence(0);
    uVar6 = FUN_04d9656c(uVar6,1,DAT_091dc030);
    uVar6 = FUN_04d9642c(uVar6,param_4,DAT_091dbfd8);
    puVar4 = (undefined8 *)(lVar2 + 0x18);
    *puVar4 = uVar6;
    thunk_FUN_03f5d7b8(puVar4,uVar6);
    FUN_04d8dc1c(*puVar4,DAT_091dbc78);
    if (lVar10 != 0) {
      FUN_06fd8888(&local_238,lVar10,DAT_0919fed0);
      uVar6 = CONCAT44(uStack_224,local_228);
      local_110 = local_218;
      puStack_128 = uStack_230;
      local_130 = local_238;
      lStack_118 = lStack_220;
      local_238 = 0;
      uStack_230 = &local_130;
      local_120 = uVar6;
LAB_044bde64:
      uVar14 = FUN_072753d4(&local_130,DAT_091a6890);
      lVar10 = lStack_118;
      uVar16 = local_120;
      if ((uVar14 & 1) != 0) {
        lVar11 = thunk_FUN_03f9944c(DAT_0918f0d8);
        CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass223_1___ctor
                  (lVar11,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(lVar11 + 0x30) = lVar2;
        thunk_FUN_03f5d7b8();
        if ((lVar10 != 0) &&
           (uVar14 = System_String__op_Equality(uVar16,lVar10,0), (uVar14 & 1) == 0)) {
          if (*(long *)(param_4 + 0x328) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar14 = FUN_06fd9fbc(*(long *)(param_4 + 0x328),lVar10,&local_138,DAT_091a0038);
          uVar9 = local_138;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar14 = UnityEngine_Object__op_Implicit(uVar9,0);
            if ((uVar14 & 1) != 0) {
              if (*(long *)(param_4 + 0x328) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar14 = FUN_06fd9fbc(*(long *)(param_4 + 0x328),uVar16,lVar11 + 0x18,DAT_091a0038);
              if ((uVar14 & 1) != 0) {
                uVar16 = *(undefined8 *)(lVar11 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar14 = UnityEngine_Object__op_Implicit(uVar16,0);
                if ((uVar14 & 1) != 0) {
                  lVar10 = CookOrder_Cooking_Implement_CookingGameplayPresentation__SnapshotPlate
                                     (param_4,local_138);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar14 = UnityEngine_Object__op_Implicit(lVar10,0);
                  lVar12 = DAT_091acd50;
                  uVar19 = (undefined4)uVar6;
                  if ((uVar14 & 1) != 0) {
                    lVar8 = *(long *)(param_4 + 0x410);
                    if (lVar8 != 0) {
                      lVar13 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar10;
                          thunk_FUN_03f5d7b8(plVar5,lVar10);
                        }
                        else {
                          FUN_057e0c68(lVar8,lVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                        }
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar10 = UnityEngine_GameObject__get_transform(lVar10,0);
                        plVar5 = (long *)(lVar11 + 0x10);
                        *plVar5 = lVar10;
                        thunk_FUN_03f5d7b8(plVar5);
                        if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar17 = UnityEngine_Transform__get_position(*plVar5,0);
                        *(undefined4 *)(lVar11 + 0x20) = uVar17;
                        *(undefined4 *)(lVar11 + 0x24) = uVar19;
                        *(float *)(lVar11 + 0x28) = param_3;
                        if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        if (*(long *)(param_4 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar10 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x48);
                        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        fVar18 = *(float *)(lVar10 + 0x10);
                        uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 0x18);
                        param_3 = 0.001;
                        if (0.001 <= fVar18) {
                          param_3 = fVar18;
                        }
                        uVar9 = thunk_FUN_03f9944c(DAT_0917f008);
                        FUN_063be1d4(uVar9,lVar11,DAT_091e7088,0);
                        uVar6 = 0x3f800000;
                        uVar9 = DG_Tweening_DOVirtual__Float(0,uVar9,0);
                        uVar9 = FUN_04d95e8c(uVar9,1,DAT_091dbee0);
                        DG_Tweening_TweenSettingsExtensions__Join(uVar16,uVar9,0);
                        goto LAB_044bde64;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                }
              }
            }
          }
        }
        goto LAB_044bde64;
      }
      FUN_072754f4(&local_130,DAT_091a6888);
      if (*(long *)(param_4 + 0x410) != 0) {
        if (*(int *)(*(long *)(param_4 + 0x410) + 0x18) == 0) {
          DG_Tweening_TweenExtensions__Kill(*puVar4,0,0);
        }
        else {
          lVar3 = FUN_06f8ffcc(lVar3,DAT_0919f578);
          if (lVar3 == 0) goto LAB_044be37c;
          FUN_055eb2a0(&local_238,lVar3,DAT_091a9248);
          local_140 = CONCAT44(uStack_224,local_228);
          puStack_148 = uStack_230;
          local_150 = local_238;
          uStack_230 = &local_150;
          local_238 = 0;
          while (uVar14 = FUN_072700d0(&local_150,DAT_091a6668), uVar6 = local_140,
                (uVar14 & 1) != 0) {
            if (*(long *)(param_4 + 0x408) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ec72c(*(long *)(param_4 + 0x408),local_140,DAT_091a86b8);
            if (*(long *)(param_4 + 0x328) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar14 = FUN_06fd9fbc(*(long *)(param_4 + 0x328),uVar6,&local_158,DAT_091a0038);
            lVar3 = local_158;
            if ((uVar14 & 1) != 0) {
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar14 = UnityEngine_Object__op_Implicit(lVar3,0);
              if ((uVar14 & 1) != 0) {
                if (local_158 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar3 = FUN_04a6ac70(local_158,1,DAT_091c5860);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (0 < (int)uVar1) {
                  lVar10 = 0;
                  do {
                    if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    lVar11 = *(long *)(lVar3 + 0x20 + lVar10 * 8);
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar12 = *(long *)(param_4 + 0x418);
                    uVar1 = UnityEngine_Renderer__get_enabled(lVar11,0);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    FUN_06f821cc(lVar12,lVar11,uVar1 & 1,DAT_0919ef08);
                    UnityEngine_Renderer__set_enabled(lVar11,0,0);
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    lVar10 = lVar10 + 1;
                  } while ((int)lVar10 < (int)uVar1);
                }
              }
            }
          }
          FUN_072700cc(&local_150,DAT_091a6660);
          *(undefined8 *)(param_4 + 0x400) = *(undefined8 *)(lVar2 + 0x18);
          thunk_FUN_03f5d7b8(param_4 + 0x400);
          uVar16 = *(undefined8 *)(lVar2 + 0x18);
          uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar6,param_4,DAT_091c65e0,0);
          FUN_04d956bc(uVar16,uVar6,DAT_091dbd18);
          uVar16 = *(undefined8 *)(lVar2 + 0x18);
          uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar6,lVar2,DAT_091e7080,0);
          FUN_04d956e8(uVar16,uVar6,DAT_091dbd48);
          FUN_04d8dd74(*(undefined8 *)(lVar2 + 0x18),DAT_091dbcc0);
        }
        return;
      }
    }
  }
LAB_044be37c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

