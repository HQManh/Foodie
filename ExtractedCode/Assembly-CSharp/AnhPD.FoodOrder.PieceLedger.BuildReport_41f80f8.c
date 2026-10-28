// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$BuildReport
// address: 0x41f80f8
// body: available
// range: 0x41f80f8-0x41f90f7 inclusive
// range: 0x41f9130-0x41f9f37 inclusive
// range: 0x41f9f9c-0x41fa207 inclusive
// range: 0x41fa438-0x41fa507 inclusive
// range: 0x41fa560-0x41fa61f inclusive
// range: 0x41fa670-0x41fa6db inclusive
// range: 0x41fa720-0x41fa8d7 inclusive
// range: 0x41fa934-0x41faa43 inclusive
// range: 0x41faa94-0x41fabab inclusive
// range: 0x41fabe0-0x41fac17 inclusive
// range: 0x41fae1c-0x41fae23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f90f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f9e60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f9a88) */
/* WARNING: Removing unreachable block (ram,0x041fae1c) */

undefined8 AnhPD_FoodOrder_PieceLedger__BuildReport(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int local_1c0;
  int iStack_1bc;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined8 *puStack_180;
  long local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 *puStack_158;
  long local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516bac & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917f998);
    FUN_03f5c2a4(&DAT_0919ca68);
    FUN_03f5c2a4(&DAT_091a1798);
    FUN_03f5c2a4(&DAT_091a1790);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919ca80);
    FUN_03f5c2a4(&DAT_0919f9e0);
    FUN_03f5c2a4(&DAT_0919ca88);
    FUN_03f5c2a4(&DAT_091a17a0);
    FUN_03f5c2a4(&DAT_09177188);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09193338);
    FUN_03f5c2a4(&DAT_091a5d80);
    FUN_03f5c2a4(&DAT_091a6d80);
    FUN_03f5c2a4(&DAT_091a5738);
    FUN_03f5c2a4(&DAT_091a5d68);
    FUN_03f5c2a4(&DAT_091a6768);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45c8);
    FUN_03f5c2a4(&DAT_091a6770);
    FUN_03f5c2a4(&DAT_091a5740);
    FUN_03f5c2a4(&DAT_091a45d0);
    FUN_03f5c2a4(&DAT_091a6d88);
    FUN_03f5c2a4(&DAT_091a5d70);
    FUN_03f5c2a4(&DAT_091a5d88);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a45d8);
    FUN_03f5c2a4(&DAT_091a5748);
    FUN_03f5c2a4(&DAT_091a6d90);
    FUN_03f5c2a4(&DAT_091a6778);
    FUN_03f5c2a4(&DAT_091a5d90);
    FUN_03f5c2a4(&DAT_091a5d78);
    FUN_03f5c2a4(&DAT_09177398);
    FUN_03f5c2a4(&DAT_091a9250);
    FUN_03f5c2a4(&DAT_091a93b0);
    FUN_03f5c2a4(&DAT_091a9ad0);
    FUN_03f5c2a4(&DAT_091a9ad8);
    FUN_03f5c2a4(&DAT_091a93b8);
    FUN_03f5c2a4(&DAT_091b3630);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b3650);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b3628);
    FUN_03f5c2a4(&DAT_091b3658);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917d648);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d59f0);
    FUN_03f5c2a4(&DAT_091d59e8);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091ba840);
    FUN_03f5c2a4(&DAT_091ba848);
    FUN_03f5c2a4(&DAT_091ba838);
    FUN_03f5c2a4(&DAT_0917e7b8);
    FUN_03f5c2a4(&DAT_09193340);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091be900);
    FUN_03f5c2a4(&DAT_091facf0);
    FUN_03f5c2a4(&DAT_09226e80);
    FUN_03f5c2a4(&DAT_091f67a8);
    FUN_03f5c2a4(&DAT_091fad18);
    FUN_03f5c2a4(&DAT_091fad10);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_09221ea8);
    FUN_03f5c2a4(&DAT_091facf8);
    FUN_03f5c2a4(&DAT_091f5c90);
    FUN_03f5c2a4(&DAT_09217f20);
    FUN_03f5c2a4(&DAT_091f5c98);
    FUN_03f5c2a4(&DAT_091f8378);
    FUN_03f5c2a4(&DAT_091f67a0);
    FUN_03f5c2a4(&DAT_091f69b0);
    FUN_03f5c2a4(&DAT_09223bf0);
    FUN_03f5c2a4(&DAT_09226458);
    FUN_03f5c2a4(&DAT_0921d190);
    FUN_03f5c2a4(&DAT_09217c28);
    FUN_03f5c2a4(&DAT_091f68a0);
    FUN_03f5c2a4(&DAT_091fad00);
    FUN_03f5c2a4(&DAT_091fad08);
    FUN_03f5c2a4(&DAT_092266a8);
    FUN_03f5c2a4(&DAT_09226e88);
    FUN_03f5c2a4(&DAT_091f69b8);
    FUN_03f5c2a4(&DAT_09226448);
    FUN_03f5c2a4(&DAT_0920a850);
    FUN_03f5c2a4(&DAT_091f82e8);
    FUN_03f5c2a4(&DAT_092262e8);
    FUN_03f5c2a4(&DAT_0921fc10);
    FUN_03f5c2a4(&DAT_09226ea8);
    FUN_03f5c2a4(&DAT_091face8);
    FUN_03f5c2a4(&DAT_09226ea0);
    DAT_09516bac = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_90 = 0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_c0 = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_100 = 0;
  puStack_138 = (undefined8 *)0x0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  local_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  local_150 = 0;
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09189140 + 0xb8) + 0xa8) == '\0') {
    return DAT_0920a850;
  }
  lVar12 = thunk_FUN_03f9944c(DAT_0917d648);
  FUN_057e0400(lVar12,DAT_091b3628);
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar13 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 8);
  if (lVar13 != 0) {
    FUN_057e185c(&local_188,lVar13,DAT_091b3650);
    local_70 = local_178;
    puStack_78 = puStack_180;
    local_80 = local_188;
    local_188 = 0;
    puStack_180 = &local_80;
LAB_041f86c8:
    uVar14 = FUN_071bd28c(&local_80,DAT_091a5740);
    lVar13 = DAT_091b3630;
    if ((uVar14 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(local_70 + 0x40) == 7) {
        if (lVar12 != 0) {
          lVar24 = *(long *)(lVar12 + 0x10);
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar24 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar24 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              *(long *)(lVar24 + (long)(int)uVar2 * 8 + 0x20) = local_70;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar12,local_70,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_041f86c8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_041f86c8;
    }
    FUN_071bd288(&local_80,DAT_091a5738);
    lVar13 = thunk_FUN_03f9944c(DAT_0917d648);
    FUN_057e0400(lVar13,DAT_091b3628);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09189140 + 0xb8) != 0) {
      FUN_06fd8888(&local_188,**(long **)(DAT_09189140 + 0xb8),DAT_0919ca68);
      local_90 = local_168;
      puStack_a8 = puStack_180;
      local_b0 = local_188;
      uStack_98 = uStack_170;
      local_a0 = local_178;
      local_188 = 0;
      puStack_180 = &local_b0;
LAB_041f87d0:
      uVar14 = FUN_072753d4(&local_b0,DAT_091a5d70);
      uVar16 = uStack_98;
      lVar24 = local_a0;
      if ((uVar14 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = UnityEngine_Object__op_Implicit(lVar24,0);
        if ((uVar14 & 1) != 0) goto code_r0x041f880c;
        goto LAB_041f882c;
      }
      FUN_072754f4(&local_b0,DAT_091a5d68);
      lVar24 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(lVar24,DAT_091b0558);
      if (lVar12 != 0) {
        FUN_057e185c(&local_188,lVar12,DAT_091b3650);
        local_70 = local_178;
        puStack_78 = puStack_180;
        local_80 = local_188;
        local_188 = 0;
        puStack_180 = &local_80;
        while (uVar14 = FUN_071bd28c(&local_80,DAT_091a5740), lVar25 = local_70, (uVar14 & 1) != 0)
        {
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar16 = AnhPD_FoodOrder_PieceLedger__Tag(lVar25);
          if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar17 = AnhPD_FoodOrder_PieceLedger__FirstLine(*(undefined8 *)(lVar25 + 0x48));
          uVar16 = System_String__Concat(uVar16,DAT_091f67a0,uVar17,0);
          lVar25 = DAT_091b0570;
          if (lVar24 == 0) {
LAB_041f9e44:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar26 = *(long *)(lVar24 + 0x10);
          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_041f9e44;
          uVar2 = *(uint *)(lVar24 + 0x18);
          if (uVar2 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar24 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar26 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar24,uVar16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_80,DAT_091a5738);
        if (lVar13 != 0) {
          FUN_057e185c(&local_188,lVar13,DAT_091b3650);
          local_70 = local_178;
          puStack_78 = puStack_180;
          local_80 = local_188;
          local_188 = 0;
          puStack_180 = &local_80;
          while (uVar14 = FUN_071bd28c(&local_80,DAT_091a5740), lVar25 = local_70, (uVar14 & 1) != 0
                ) {
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar16 = AnhPD_FoodOrder_PieceLedger__Tag(lVar25);
            uVar16 = System_String__Concat(uVar16,DAT_091f67a8,0);
            lVar25 = DAT_091b0570;
            if (lVar24 == 0) {
LAB_041f9e40:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar26 = *(long *)(lVar24 + 0x10);
            *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
            if (lVar26 == 0) goto LAB_041f9e40;
            uVar2 = *(uint *)(lVar24 + 0x18);
            if (uVar2 < *(uint *)(lVar26 + 0x18)) {
              *(uint *)(lVar24 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar26 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar24,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_071bd288(&local_80,DAT_091a5738);
          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar25 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x18);
          if (lVar25 != 0) {
            FUN_057e185c(&local_188,lVar25,DAT_091b05a8);
            local_c0 = local_178;
            puStack_c8 = puStack_180;
            local_d0 = local_188;
            local_188 = 0;
            puStack_180 = &local_d0;
            while (uVar14 = FUN_071bd28c(&local_d0,DAT_091a45a0), (uVar14 & 1) != 0) {
              uVar16 = System_String__Concat(DAT_0921fc10,local_c0,0);
              lVar25 = DAT_091b0570;
              if (lVar24 == 0) {
LAB_041f9e3c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar26 = *(long *)(lVar24 + 0x10);
              *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
              if (lVar26 == 0) goto LAB_041f9e3c;
              uVar2 = *(uint *)(lVar24 + 0x18);
              if (uVar2 < *(uint *)(lVar26 + 0x18)) {
                *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar26 + (long)(int)uVar2 * 8 + 0x20) = uVar16;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar24,uVar16,
                             *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_071bd288(&local_d0,DAT_091a4598);
            if (*(int *)(DAT_09189140 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar25 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x68);
            if (lVar25 != 0) {
              FUN_057e185c(&local_188,lVar25,DAT_091b05a8);
              local_c0 = local_178;
              puStack_c8 = puStack_180;
              local_d0 = local_188;
              local_188 = 0;
              puStack_180 = &local_d0;
              while (uVar14 = FUN_071bd28c(&local_d0,DAT_091a45a0), lVar25 = DAT_091b0570,
                    (uVar14 & 1) != 0) {
                if (lVar24 == 0) {
LAB_041f9e38:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar26 = *(long *)(lVar24 + 0x10);
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar26 == 0) goto LAB_041f9e38;
                uVar2 = *(uint *)(lVar24 + 0x18);
                if (uVar2 < *(uint *)(lVar26 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                  *(long *)(lVar26 + (long)(int)uVar2 * 8 + 0x20) = local_c0;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(lVar24,local_c0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                }
              }
              FUN_071bd288(&local_d0,DAT_091a4598);
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar26 = AnhPD_FoodOrder_PieceLedger__DescribeSurplus(lVar13);
              lVar25 = DAT_091b0570;
              if (lVar26 != 0) {
                if (lVar24 == 0) goto LAB_041faba8;
                lVar27 = *(long *)(lVar24 + 0x10);
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar27 == 0) goto LAB_041faba8;
                uVar2 = *(uint *)(lVar24 + 0x18);
                if (uVar2 < *(uint *)(lVar27 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                  *(long *)(lVar27 + (long)(int)uVar2 * 8 + 0x20) = lVar26;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(lVar24,lVar26,
                               *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar25 = thunk_FUN_03f9944c(DAT_09176b28);
              FUN_06fc96ac(lVar25,DAT_0919f978);
              uVar16 = **(undefined8 **)(DAT_091881a0 + 0xb8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar14 = UnityEngine_Object__op_Implicit(uVar16,0);
              lVar26 = 0;
              if ((uVar14 & 1) != 0) {
                if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041faba8;
                lVar26 = AnhPD_FoodOrder_MessyController__get_Spawner
                                   (**(long **)(DAT_091881a0 + 0xb8),0);
              }
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar14 = UnityEngine_Object__op_Implicit(lVar26,0);
              if ((uVar14 & 1) != 0) {
                if (lVar26 == 0) goto LAB_041faba8;
                AnhPD_FoodOrder_IngredientSpawnerController__CountBeltServings(lVar26,lVar25,0);
              }
              lVar26 = thunk_FUN_03f9944c(DAT_0917e7b8);
              FUN_060face4(lVar26,DAT_091ba838);
              plVar18 = (long *)FUN_03f5c394(DAT_0917f998,8);
              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09189140);
              }
              if (plVar18 != (long *)0x0) {
                lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x30);
                if ((lVar27 != 0) &&
                   (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar19 == 0)) {
LAB_041f9f2c:
                  uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar16,0);
                }
                if ((int)plVar18[3] != 0) {
                  plVar18[4] = lVar27;
                  thunk_FUN_03f5d7b8(plVar18 + 4,lVar27);
                  lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x38);
                  if ((lVar27 != 0) &&
                     (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40)),
                     lVar19 == 0)) goto LAB_041f9f2c;
                  if ((*(uint *)(plVar18 + 3) & 0xfffffffe) != 0) {
                    plVar18[5] = lVar27;
                    thunk_FUN_03f5d7b8(plVar18 + 5,lVar27);
                    lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x40);
                    if ((lVar27 != 0) &&
                       (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar19 == 0)) goto LAB_041f9f2c;
                    if (2 < *(uint *)(plVar18 + 3)) {
                      plVar18[6] = lVar27;
                      thunk_FUN_03f5d7b8(plVar18 + 6,lVar27);
                      lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x48);
                      if ((lVar27 != 0) &&
                         (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40)),
                         lVar19 == 0)) goto LAB_041f9f2c;
                      if ((*(uint *)(plVar18 + 3) & 0xfffffffc) != 0) {
                        plVar18[7] = lVar27;
                        thunk_FUN_03f5d7b8(plVar18 + 7,lVar27);
                        lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x50);
                        if ((lVar27 != 0) &&
                           (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar19 == 0)) goto LAB_041f9f2c;
                        if (4 < *(uint *)(plVar18 + 3)) {
                          plVar18[8] = lVar27;
                          thunk_FUN_03f5d7b8(plVar18 + 8,lVar27);
                          if ((lVar25 != 0) &&
                             (lVar27 = thunk_FUN_03f99350(lVar25,*(undefined8 *)(*plVar18 + 0x40)),
                             lVar27 == 0)) goto LAB_041f9f2c;
                          if (5 < *(uint *)(plVar18 + 3)) {
                            plVar18[9] = lVar25;
                            thunk_FUN_03f5d7b8(plVar18 + 9,lVar25);
                            lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x58);
                            if ((lVar27 != 0) &&
                               (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)(*plVar18 + 0x40))
                               , lVar19 == 0)) goto LAB_041f9f2c;
                            if (6 < *(uint *)(plVar18 + 3)) {
                              plVar18[10] = lVar27;
                              thunk_FUN_03f5d7b8(plVar18 + 10,lVar27);
                              lVar27 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x60);
                              if ((lVar27 != 0) &&
                                 (lVar19 = thunk_FUN_03f99350(lVar27,*(undefined8 *)
                                                                      (*plVar18 + 0x40)),
                                 lVar19 == 0)) goto LAB_041f9f2c;
                              if ((*(uint *)(plVar18 + 3) & 0xfffffff8) != 0) {
                                plVar18[0xb] = lVar27;
                                thunk_FUN_03f5d7b8(plVar18 + 0xb,lVar27);
                                uVar2 = *(uint *)(plVar18 + 3);
                                if (0 < (int)uVar2) {
                                  uVar14 = 0;
                                  do {
                                    if (uVar2 <= uVar14) goto LAB_041f9e84;
                                    if ((plVar18[uVar14 + 4] == 0) ||
                                       (lVar27 = FUN_06fca110(plVar18[uVar14 + 4],DAT_0919f9e0),
                                       lVar27 == 0)) goto LAB_041faba8;
                                    FUN_055ed760(&local_188,lVar27,DAT_091a9250);
                                    local_f0 = local_188;
                                    local_188 = 0;
                                    puStack_e8 = puStack_180;
                                    local_e0 = local_178;
                                    puStack_180 = &local_f0;
                                    while (uVar20 = FUN_07273460(&local_f0,DAT_091a6770),
                                          (uVar20 & 1) != 0) {
                                      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c550();
                                      }
                                      FUN_060fafbc(lVar26,local_e0,DAT_091ba840);
                                    }
                                    FUN_0727345c(&local_f0,DAT_091a6768);
                                    uVar2 = *(uint *)(plVar18 + 3);
                                    uVar14 = uVar14 + 1;
                                  } while ((int)uVar14 < (int)uVar2);
                                }
                                lVar27 = thunk_FUN_03f9944c(DAT_0918b348);
                                System_Text_StringBuilder___ctor(lVar27,0);
                                if ((lVar27 != 0) &&
                                   (System_Text_StringBuilder__AppendLine(lVar27,DAT_0921d190,0),
                                   lVar26 != 0)) {
                                  FUN_060fbd28(&local_188,lVar26,DAT_091ba848);
                                  local_1c0 = 0;
                                  iStack_1bc = 0;
                                  puStack_118 = puStack_180;
                                  local_120 = local_188;
                                  uStack_108 = uStack_170;
                                  lStack_110 = local_178;
                                  local_100 = local_168;
                                  local_188 = 0;
                                  puStack_180 = &local_120;
                                  do {
                                    do {
                                      if (*(int *)(DAT_09177398 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      uVar14 = FUN_071be688(&local_120,DAT_091a45d0);
                                      if ((uVar14 & 1) == 0) {
                                        if (*(int *)(DAT_09177398 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        FUN_071be910(puStack_180,DAT_091a45c8);
                                        if (DAT_09515fad == '\0') {
                                          FUN_03f5c2a4(&DAT_0918aec0);
                                          DAT_09515fad = '\x01';
                                        }
                                        lVar25 = **(long **)(DAT_0918aec0 + 0xb8);
                                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar14 = UnityEngine_Object__op_Implicit(lVar25,0);
                                        if ((uVar14 & 1) == 0) {
                                          iVar9 = 0;
                                        }
                                        else {
                                          if (lVar25 == 0) goto LAB_041faba8;
                                          iVar9 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount
                                                            (lVar25,0);
                                        }
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        iVar4 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x90);
                                        if (iVar4 != *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x94)
                                                     + iVar9) {
                                          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                            FUN_03f5c424();
                                            iVar4 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x90);
                                          }
                                          local_188 = CONCAT44(local_188._4_4_,iVar4);
                                          uVar16 = FUN_03f5c42c(DAT_09535420,&local_188);
                                          local_18c = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x94
                                                              );
                                          uVar17 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                          local_190 = iVar9;
                                          uVar22 = FUN_03f5c42c(DAT_09535420,&local_190);
                                          uVar16 = System_String__Format
                                                             (DAT_09221ea8,uVar16,uVar17,uVar22,0);
                                          if (lVar24 == 0) goto LAB_041faba8;
                                          FUN_039b0ea8(lVar24,uVar16,DAT_091b0570);
                                        }
                                        uVar16 = **(undefined8 **)(DAT_091881a0 + 0xb8);
                                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar14 = UnityEngine_Object__op_Implicit(uVar16,0);
                                        lVar25 = 0;
                                        if ((uVar14 & 1) != 0) {
                                          if (**(long **)(DAT_091881a0 + 0xb8) == 0)
                                          goto LAB_041faba8;
                                          lVar25 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) +
                                                            0x110);
                                          if (lVar25 == 0) {
                                            lVar25 = 0;
                                          }
                                          else {
                                            lVar25 = *(long *)(lVar25 + 0x18);
                                          }
                                        }
                                        plVar18 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
                                        System_Text_StringBuilder___ctor(plVar18,0);
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        if (*(char *)(*(long *)(DAT_09189140 + 0xb8) + 0x98) == '\0'
                                           ) {
                                          if (plVar18 == (long *)0x0) goto LAB_041faba8;
                                          System_Text_StringBuilder__AppendLine
                                                    (plVar18,DAT_09226e80,0);
                                        }
                                        if (lVar24 == 0) goto LAB_041faba8;
                                        if (*(int *)(lVar24 + 0x18) == 0) {
                                          local_188 = CONCAT44(local_188._4_4_,local_1c0);
                                          uVar16 = FUN_03f5c42c(DAT_09535420,&local_188);
                                          local_18c = iStack_1bc;
                                          uVar17 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                          uVar16 = System_String__Format
                                                             (DAT_09226ea0,uVar16,uVar17,0);
                                          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                            FUN_03f5c424(DAT_09189140);
                                          }
                                          lVar24 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 8);
                                          if (lVar24 == 0) goto LAB_041faba8;
                                          local_190 = *(int *)(lVar24 + 0x18);
                                          uVar17 = FUN_03f5c42c(DAT_09535420,&local_190);
                                          uVar17 = System_String__Format(DAT_092262e8,uVar17,0);
                                          uVar16 = System_String__Concat(uVar16,uVar17,0);
                                          if (plVar18 == (long *)0x0) goto LAB_041faba8;
                                          System_Text_StringBuilder__AppendLine(plVar18,uVar16,0);
                                        }
                                        else {
                                          local_18c = *(int *)(lVar24 + 0x18);
                                          uVar16 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                          uVar16 = System_String__Format(DAT_09226ea8,uVar16,0);
                                          if (plVar18 == (long *)0x0) goto LAB_041faba8;
                                          System_Text_StringBuilder__AppendLine(plVar18,uVar16,0);
                                          FUN_057e185c(&local_188,lVar24,DAT_091b05a8);
                                          puStack_c8 = puStack_180;
                                          local_d0 = local_188;
                                          local_c0 = local_178;
                                          local_188 = 0;
                                          puStack_180 = &local_d0;
                                          while (uVar14 = FUN_071bd28c(&local_d0,DAT_091a45a0),
                                                (uVar14 & 1) != 0) {
                                            uVar16 = System_String__Concat(DAT_091f5c98,local_c0,0);
                                            System_Text_StringBuilder__AppendLine(plVar18,uVar16,0);
                                          }
                                          FUN_039af92c(&local_188);
                                        }
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        iVar4 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x78);
                                        if (0 < *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x7c) +
                                                iVar4) {
                                          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                            FUN_03f5c424();
                                            iVar4 = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x78);
                                          }
                                          local_188 = CONCAT44(local_188._4_4_,iVar4);
                                          uVar16 = FUN_03f5c42c(DAT_09535420,&local_188);
                                          local_18c = *(int *)(*(long *)(DAT_09189140 + 0xb8) + 0x7c
                                                              );
                                          uVar17 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                          uVar16 = System_String__Format
                                                             (DAT_09226e88,uVar16,uVar17,0);
                                          if (plVar18 == (long *)0x0) goto LAB_041faba8;
                                          System_Text_StringBuilder__AppendLine(plVar18,uVar16,0);
                                        }
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar16 = AnhPD_FoodOrder_PieceLedger__SessionHeader();
                                        if (plVar18 != (long *)0x0) {
                                          System_Text_StringBuilder__AppendLine(plVar18,uVar16,0);
                                          System_Text_StringBuilder__AppendLine(plVar18,0);
                                          System_Text_StringBuilder__AppendLine
                                                    (plVar18,DAT_091facf0,0);
                                          System_Text_StringBuilder__Append(plVar18,lVar27,0);
                                          System_Text_StringBuilder__AppendLine(plVar18,0);
                                          AnhPD_FoodOrder_PieceLedger__AppendBag
                                                    (plVar18,lVar25,iVar9);
                                          if (lVar25 != 0) {
                                            System_Text_StringBuilder__AppendLine
                                                      (plVar18,DAT_091fad18,0);
                                            uVar16 = AnhPD_FoodOrder_LevelPieceBook__DebugReport
                                                               (lVar25);
                                            System_Text_StringBuilder__Append(plVar18,uVar16,0);
                                            System_Text_StringBuilder__AppendLine(plVar18,0);
                                          }
                                          lVar24 = thunk_FUN_03f9944c(DAT_09177188);
                                          FUN_06f2c578(lVar24,DAT_091a1790);
                                          if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                            FUN_03f5c424();
                                          }
                                          lVar25 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 8);
                                          if (lVar25 != 0) {
                                            FUN_057e185c(&local_188,lVar25,DAT_091b3650);
                                            puStack_78 = puStack_180;
                                            local_80 = local_188;
                                            local_70 = local_178;
                                            local_188 = 0;
                                            puStack_180 = &local_80;
                                            while (uVar14 = FUN_071bd28c(&local_80,DAT_091a5740),
                                                  (uVar14 & 1) != 0) {
                                              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_03f5c550();
                                              }
                                              uVar1 = *(undefined4 *)(local_70 + 0x40);
                                              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                FUN_03f5c424();
                                              }
                                              iVar9 = FUN_04c8f0e4(lVar24,uVar1,DAT_091d59f0);
                                              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_03f5c550();
                                              }
                                              FUN_06f2d308(lVar24,uVar1,iVar9 + 1,DAT_091a17a0);
                                            }
                                            FUN_039b41cc(&local_188);
                                            System_Text_StringBuilder__Append
                                                      (plVar18,DAT_091fad00,0);
                                            if (lVar24 != 0) {
                                              FUN_06f2d6f4(&local_188,lVar24,DAT_091a1798);
                                              puStack_138 = puStack_180;
                                              local_140 = local_188;
                                              puStack_180 = &local_140;
                                              uStack_128 = uStack_170;
                                              local_130 = local_178;
                                              local_188 = 0;
                                              while (uVar14 = FUN_0726063c(&local_140,DAT_091a6d88),
                                                    lVar24 = local_130, (uVar14 & 1) != 0) {
                                                local_18c = (int)local_130;
                                                uVar16 = FUN_03f5c42c(DAT_09193338,&local_18c);
                                                local_190 = (int)((ulong)lVar24 >> 0x20);
                                                uVar17 = FUN_03f5c42c(DAT_09535420,&local_190);
                                                uVar16 = System_String__Format
                                                                   (DAT_092266a8,uVar16,uVar17,0);
                                                System_Text_StringBuilder__Append(plVar18,uVar16,0);
                                              }
                                              FUN_039b42a8(&local_188);
                                              System_Text_StringBuilder__AppendLine(plVar18,0);
                                              System_Text_StringBuilder__AppendLine(plVar18,0);
                                              if ((0 < *(int *)(lVar12 + 0x18)) ||
                                                 (0 < *(int *)(lVar13 + 0x18))) {
                                                System_Text_StringBuilder__AppendLine
                                                          (plVar18,DAT_091fad10,0);
                                                FUN_057e185c(&local_188,lVar12,DAT_091b3650);
                                                local_70 = local_178;
                                                puStack_78 = puStack_180;
                                                local_80 = local_188;
                                                local_188 = 0;
                                                puStack_180 = &local_80;
                                                while (uVar14 = FUN_071bd28c(&local_80,DAT_091a5740)
                                                      , lVar12 = local_70, (uVar14 & 1) != 0) {
                                                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  AnhPD_FoodOrder_PieceLedger__AppendJourney
                                                            (plVar18,lVar12);
                                                }
                                                FUN_039b41cc(&local_188);
                                                FUN_057e185c(&local_188,lVar13,DAT_091b3650);
                                                local_70 = local_178;
                                                puStack_78 = puStack_180;
                                                local_80 = local_188;
                                                local_188 = 0;
                                                puStack_180 = &local_80;
                                                while (uVar14 = FUN_071bd28c(&local_80,DAT_091a5740)
                                                      , lVar12 = local_70, (uVar14 & 1) != 0) {
                                                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  AnhPD_FoodOrder_PieceLedger__AppendJourney
                                                            (plVar18,lVar12);
                                                }
                                                FUN_039b41cc(&local_188);
                                                System_Text_StringBuilder__AppendLine(plVar18,0);
                                              }
                                              if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                FUN_03f5c424();
                                              }
                                              if (**(long **)(DAT_09189140 + 0xb8) != 0) {
                                                local_18c = FUN_06fd810c(**(long **)(DAT_09189140 +
                                                                                    0xb8),
                                                                         DAT_0919ca80);
                                                uVar16 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                                uVar16 = System_String__Format
                                                                   (DAT_091face8,uVar16,0);
                                                System_Text_StringBuilder__AppendLine
                                                          (plVar18,uVar16,0);
                                                if ((**(long **)(DAT_09189140 + 0xb8) != 0) &&
                                                   (lVar12 = FUN_06fd8278(**(long **)(DAT_09189140 +
                                                                                     0xb8),
                                                                          DAT_0919ca88), lVar12 != 0
                                                   )) {
                                                  FUN_06544014(&local_188,lVar12,DAT_091be900);
                                                  puStack_158 = puStack_180;
                                                  local_160 = local_188;
                                                  local_150 = local_178;
                                                  puStack_180 = &local_160;
                                                  local_188 = 0;
                                                  while (uVar14 = FUN_072759a8(&local_160,
                                                                               DAT_091a5d88),
                                                        lVar12 = local_150, (uVar14 & 1) != 0) {
                                                    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    uVar16 = AnhPD_FoodOrder_PieceLedger__Tag
                                                                       (lVar12);
                                                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_03f5c550();
                                                    }
                                                    local_18c = *(int *)(lVar12 + 0x20);
                                                    uVar17 = FUN_03f5c42c(DAT_09193340,&local_18c);
                                                    uVar16 = System_String__Format
                                                                       (DAT_091f5c90,uVar16,uVar17,0
                                                                       );
                                                    lVar12 = *(long *)(lVar12 + 0x58);
                                                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_03f5c550();
                                                    }
                                                    uVar17 = DAT_091f82e8;
                                                    if (0 < *(int *)(lVar12 + 0x18)) {
                                                      uVar17 = FUN_057e0998(lVar12,*(int *)(lVar12 +
                                                                                           0x18) +
                                                                                   -1,DAT_091b0610);
                                                    }
                                                    uVar16 = System_String__Concat(uVar16,uVar17,0);
                                                    System_Text_StringBuilder__AppendLine
                                                              (plVar18,uVar16,0);
                                                  }
                                                  FUN_039b42d8(&local_188);
                                                  System_Text_StringBuilder__AppendLine(plVar18,0);
                                                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  lVar12 = *(long *)(*(long *)(DAT_09189140 + 0xb8)
                                                                    + 0x70);
                                                  if (lVar12 != 0) {
                                                    if (0 < *(int *)(lVar12 + 0x18)) {
                                                      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                        FUN_03f5c424();
                                                        lVar12 = *(long *)(*(long *)(DAT_09189140 +
                                                                                    0xb8) + 0x70);
                                                        if (lVar12 == 0) goto LAB_041faba8;
                                                      }
                                                      local_18c = *(int *)(lVar12 + 0x18);
                                                      uVar16 = FUN_03f5c42c(DAT_09535420,&local_18c)
                                                      ;
                                                      uVar16 = System_String__Format
                                                                         (DAT_091facf8,uVar16,0);
                                                      System_Text_StringBuilder__AppendLine
                                                                (plVar18,uVar16,0);
                                                      lVar12 = *(long *)(*(long *)(DAT_09189140 +
                                                                                  0xb8) + 0x70);
                                                      if (lVar12 == 0) goto LAB_041faba8;
                                                      FUN_057e185c(&local_188,lVar12,DAT_091b05a8);
                                                      local_c0 = local_178;
                                                      puStack_c8 = puStack_180;
                                                      local_d0 = local_188;
                                                      local_188 = 0;
                                                      puStack_180 = &local_d0;
                                                      while (uVar14 = FUN_071bd28c(&local_d0,
                                                                                   DAT_091a45a0),
                                                            (uVar14 & 1) != 0) {
                                                        System_Text_StringBuilder__AppendLine
                                                                  (plVar18,local_c0,0);
                                                      }
                                                      FUN_039af92c(&local_188);
                                                      System_Text_StringBuilder__AppendLine
                                                                (plVar18,0);
                                                    }
                                                    System_Text_StringBuilder__AppendLine
                                                              (plVar18,DAT_091fad08,0);
                                                    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    iVar9 = *(int *)(*(long *)(DAT_09189140 + 0xb8)
                                                                    + 0x9c);
                                                    if (0 < iVar9) {
                                                      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                        FUN_03f5c424();
                                                        iVar9 = *(int *)(*(long *)(DAT_09189140 +
                                                                                  0xb8) + 0x9c);
                                                      }
                                                      local_188 = CONCAT44(local_188._4_4_,iVar9);
                                                      uVar16 = FUN_03f5c42c(DAT_09535420,&local_188)
                                                      ;
                                                      uVar16 = System_String__Format
                                                                         (DAT_091f8378,uVar16,0);
                                                      System_Text_StringBuilder__AppendLine
                                                                (plVar18,uVar16,0);
                                                    }
                                                    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                                      FUN_03f5c424();
                                                    }
                                                    lVar12 = *(long *)(*(long *)(DAT_09189140 + 0xb8
                                                                                ) + 0x10);
                                                    if (lVar12 != 0) {
                                                      FUN_057e185c(&local_188,lVar12,DAT_091b05a8);
                                                      local_c0 = local_178;
                                                      puStack_c8 = puStack_180;
                                                      local_d0 = local_188;
                                                      local_188 = 0;
                                                      puStack_180 = &local_d0;
                                                      while (uVar14 = FUN_071bd28c(&local_d0,
                                                                                   DAT_091a45a0),
                                                            (uVar14 & 1) != 0) {
                                                        System_Text_StringBuilder__AppendLine
                                                                  (plVar18,local_c0,0);
                                                      }
                                                      FUN_039af92c(&local_188);
                                                      uVar16 = (**(code **)(*plVar18 + 0x168))
                                                                         (plVar18,*(undefined8 *)
                                                                                   (*plVar18 + 0x170
                                                                                   ));
                                                      return uVar16;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_041faba8;
                                      }
                                      if (*(int *)(DAT_09177398 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      lVar26 = FUN_071be914(&local_120,DAT_091a45d8);
                                      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                        FUN_03f5c424();
                                      }
                                      iVar4 = FUN_04c8f14c(*(undefined8 *)
                                                            (*(long *)(DAT_09189140 + 0xb8) + 0x30),
                                                           lVar26,DAT_091d59e8);
                                      iVar5 = FUN_04c8f14c(*(undefined8 *)
                                                            (*(long *)(DAT_09189140 + 0xb8) + 0x38),
                                                           lVar26,DAT_091d59e8);
                                      iVar6 = FUN_04c8f14c(*(undefined8 *)
                                                            (*(long *)(DAT_09189140 + 0xb8) + 0x50),
                                                           lVar26,DAT_091d59e8);
                                      iVar7 = FUN_04c8f14c(*(undefined8 *)
                                                            (*(long *)(DAT_09189140 + 0xb8) + 0x40),
                                                           lVar26,DAT_091d59e8);
                                      iVar8 = FUN_04c8f14c(*(undefined8 *)
                                                            (*(long *)(DAT_09189140 + 0xb8) + 0x48),
                                                           lVar26,DAT_091d59e8);
                                      iVar9 = FUN_04c8f14c(lVar25,lVar26,DAT_091d59e8);
                                      iVar10 = FUN_04c8f14c(*(undefined8 *)
                                                             (*(long *)(DAT_09189140 + 0xb8) + 0x58)
                                                            ,lVar26,DAT_091d59e8);
                                      iVar11 = FUN_04c8f14c(*(undefined8 *)
                                                             (*(long *)(DAT_09189140 + 0xb8) + 0x60)
                                                            ,lVar26,DAT_091d59e8);
                                      local_1c0 = iVar4 + local_1c0;
                                      iStack_1bc = iVar9 + iStack_1bc;
                                      plVar18 = (long *)FUN_03f5c394(DAT_09180318,7);
                                      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c550();
                                      }
                                      if ((lVar26 != 0) &&
                                         (lVar19 = thunk_FUN_03f99350(lVar26,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar19 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[4] = lVar26;
                                      thunk_FUN_03f5d7b8(plVar18 + 4,lVar26);
                                      local_18c = iVar4;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_18c);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if ((*(uint *)(plVar18 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[5] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 5,lVar19);
                                      local_190 = iVar5;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_190);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if (*(uint *)(plVar18 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[6] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 6,lVar19);
                                      local_194 = iVar7;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_194);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if ((*(uint *)(plVar18 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[7] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 7,lVar19);
                                      local_198 = iVar8;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_198);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if (*(uint *)(plVar18 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[8] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 8,lVar19);
                                      local_19c = iVar6;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_19c);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if (*(uint *)(plVar18 + 3) < 6) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[9] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 9,lVar19);
                                      local_1a0 = iVar9;
                                      lVar19 = FUN_03f5c42c(DAT_09535420,&local_1a0);
                                      if ((lVar19 != 0) &&
                                         (lVar21 = thunk_FUN_03f99350(lVar19,*(undefined8 *)
                                                                              (*plVar18 + 0x40)),
                                         lVar21 == 0)) {
                                        uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c414(uVar16,0);
                                      }
                                      if (*(uint *)(plVar18 + 3) < 7) {
                    /* WARNING: Subroutine does not return */
                                        FUN_03f5c558();
                                      }
                                      plVar18[10] = lVar19;
                                      thunk_FUN_03f5d7b8(plVar18 + 10,lVar19);
                                      uVar16 = System_String__Format(DAT_09226458,plVar18,0);
                                      iVar4 = iVar5 + iVar4 + iVar6;
                                      iVar9 = iVar8 + iVar7 + iVar9;
                                      iVar5 = iVar4 - iVar9;
                                      local_1a4 = iVar5;
                                      uVar17 = FUN_03f5c42c(DAT_09535420,&local_1a4);
                                      local_1a8 = iVar7 - iVar10;
                                      uVar22 = FUN_03f5c42c(DAT_09535420,&local_1a8);
                                      iVar3 = iVar8 - (iVar11 + iVar6);
                                      local_1ac = iVar3;
                                      uVar23 = FUN_03f5c42c(DAT_09535420,&local_1ac);
                                      uVar17 = System_String__Format
                                                         (DAT_09226448,uVar17,uVar22,uVar23,0);
                                      uVar16 = System_String__Concat(uVar16,uVar17,0);
                                      System_Text_StringBuilder__AppendLine(lVar27,uVar16,0);
                                      if (iVar4 != iVar9) {
                                        lVar19 = FUN_03f5c394(DAT_091805f8,5);
                                        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c550();
                                        }
                                        if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x20) = DAT_09217f20;
                                        thunk_FUN_03f5d7b8();
                                        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(long *)(lVar19 + 0x28) = lVar26;
                                        thunk_FUN_03f5d7b8((long *)(lVar19 + 0x28),lVar26);
                                        if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x30) = DAT_091f9f60;
                                        thunk_FUN_03f5d7b8();
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar16 = AnhPD_FoodOrder_PieceLedger__Gap(iVar5);
                                        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x38) = uVar16;
                                        thunk_FUN_03f5d7b8();
                                        if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x40) = DAT_091f69b0;
                                        thunk_FUN_03f5d7b8();
                                        uVar16 = System_String__Concat(lVar19,0);
                                        lVar19 = DAT_091b0570;
                                        if (lVar24 == 0) {
LAB_041f9e78:
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c550();
                                        }
                                        lVar21 = *(long *)(lVar24 + 0x10);
                                        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                                        if (lVar21 == 0) goto LAB_041f9e78;
                                        uVar2 = *(uint *)(lVar24 + 0x18);
                                        if (uVar2 < *(uint *)(lVar21 + 0x18)) {
                                          *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar21 + (long)(int)uVar2 * 8 + 0x20) =
                                               uVar16;
                                          thunk_FUN_03f5d7b8();
                                        }
                                        else {
                                          FUN_057e0c68(lVar24,uVar16,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                      }
                                      if (iVar7 != iVar10) {
                                        lVar19 = FUN_03f5c394(DAT_091805f8,5);
                                        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c550();
                                        }
                                        if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x20) = DAT_09223bf0;
                                        thunk_FUN_03f5d7b8();
                                        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(long *)(lVar19 + 0x28) = lVar26;
                                        thunk_FUN_03f5d7b8((long *)(lVar19 + 0x28),lVar26);
                                        if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x30) = DAT_091f68a0;
                                        thunk_FUN_03f5d7b8();
                                        if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        uVar16 = AnhPD_FoodOrder_PieceLedger__Gap(iVar7 - iVar10);
                                        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x38) = uVar16;
                                        thunk_FUN_03f5d7b8();
                                        if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c558();
                                        }
                                        *(undefined8 *)(lVar19 + 0x40) = DAT_091f69b8;
                                        thunk_FUN_03f5d7b8();
                                        uVar16 = System_String__Concat(lVar19,0);
                                        lVar19 = DAT_091b0570;
                                        if (lVar24 == 0) {
LAB_041f9e80:
                    /* WARNING: Subroutine does not return */
                                          FUN_03f5c550();
                                        }
                                        lVar21 = *(long *)(lVar24 + 0x10);
                                        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                                        if (lVar21 == 0) goto LAB_041f9e80;
                                        uVar2 = *(uint *)(lVar24 + 0x18);
                                        if (uVar2 < *(uint *)(lVar21 + 0x18)) {
                                          *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar21 + (long)(int)uVar2 * 8 + 0x20) =
                                               uVar16;
                                          thunk_FUN_03f5d7b8();
                                        }
                                        else {
                                          FUN_057e0c68(lVar24,uVar16,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                      }
                                    } while (iVar8 == iVar11 + iVar6);
                                    lVar19 = FUN_03f5c394(DAT_091805f8,5);
                                    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c550();
                                    }
                                    if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    *(undefined8 *)(lVar19 + 0x20) = DAT_09217c28;
                                    thunk_FUN_03f5d7b8();
                                    if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    *(long *)(lVar19 + 0x28) = lVar26;
                                    thunk_FUN_03f5d7b8((long *)(lVar19 + 0x28),lVar26);
                                    if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    *(undefined8 *)(lVar19 + 0x30) = DAT_091f9f60;
                                    thunk_FUN_03f5d7b8();
                                    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    uVar16 = AnhPD_FoodOrder_PieceLedger__Gap(iVar3);
                                    if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    *(undefined8 *)(lVar19 + 0x38) = uVar16;
                                    thunk_FUN_03f5d7b8();
                                    if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c558();
                                    }
                                    *(undefined8 *)(lVar19 + 0x40) = DAT_091f69b8;
                                    thunk_FUN_03f5d7b8();
                                    uVar16 = System_String__Concat(lVar19,0);
                                    lVar26 = DAT_091b0570;
                                    if (lVar24 == 0) {
LAB_041f9e7c:
                    /* WARNING: Subroutine does not return */
                                      FUN_03f5c550();
                                    }
                                    lVar19 = *(long *)(lVar24 + 0x10);
                                    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                                    if (lVar19 == 0) goto LAB_041f9e7c;
                                    uVar2 = *(uint *)(lVar24 + 0x18);
                                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                                      *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar16
                                      ;
                                      thunk_FUN_03f5d7b8();
                                    }
                                    else {
                                      FUN_057e0c68(lVar24,uVar16,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                  } while( true );
                                }
                                goto LAB_041faba8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_041f9e84:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
        }
      }
    }
  }
LAB_041faba8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x041f880c:
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar24 = UnityEngine_Component__get_gameObject(lVar24,0);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar14 = UnityEngine_GameObject__get_activeSelf(lVar24,0);
  if ((uVar14 & 1) == 0) {
LAB_041f882c:
    lVar24 = DAT_091b3630;
    if (lVar13 != 0) {
      lVar25 = *(long *)(lVar13 + 0x10);
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar25 != 0) {
        uVar2 = *(uint *)(lVar13 + 0x18);
        if (uVar2 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          puVar15 = (undefined8 *)(lVar25 + (long)(int)uVar2 * 8 + 0x20);
          *puVar15 = uVar16;
          thunk_FUN_03f5d7b8(puVar15,uVar16);
        }
        else {
          FUN_057e0c68(lVar13,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_041f87d0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_041f87d0;
}

