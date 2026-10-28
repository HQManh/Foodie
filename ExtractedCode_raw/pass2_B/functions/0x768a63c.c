// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$DecimalTryParse
// address: 0x768a63c
// body: available
// range: 0x768a63c-0x768b00f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768afec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768b000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768b004 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ConvertUtils__DecimalTryParse
               (long param_1,uint param_2,int param_3,undefined1 (*param_4) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort *puVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int local_b4;
  ushort local_a8 [2];
  uint local_a4;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  lVar10 = param_1;
  if ((DAT_0952256c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091b6af8);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6af0);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_091b6b00);
    lVar10 = FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_0952256c = 1;
  }
  local_a4 = 0;
  local_a8[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  *(undefined8 *)*param_4 = 0;
  *(undefined8 *)(*param_4 + 8) = 0;
  if (param_3 == 0) {
LAB_0768a740:
    lVar10 = 3;
  }
  else {
    if (param_1 == 0) {
      if (*(long *)(lVar14 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0768b004;
    }
    if (*(uint *)(param_1 + 0x18) <= param_2) {
      lVar14 = *(long *)(lVar14 + 0x28);
LAB_0768afe0:
      if (lVar14 == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(lVar10);
      }
      goto LAB_0768b004;
    }
    sVar4 = *(short *)(param_1 + (long)(int)param_2 * 2 + 0x20);
    if (sVar4 == 0x2d) {
      param_3 = param_3 + -1;
      if (param_3 == 0) goto LAB_0768a740;
      param_2 = param_2 + 1;
    }
    uVar2 = param_2 + param_3;
    local_a4 = 0;
    local_a8[0] = 0;
    if ((int)param_2 < (int)uVar2) {
      local_b4 = 0;
      iVar21 = 0;
      uVar18 = 0;
      uVar17 = 0;
      iVar19 = 0;
      uVar1 = param_2 + 1;
      uVar22 = uVar2;
      uVar20 = param_2;
      uVar24 = uVar2;
      do {
        uVar3 = *(uint *)(param_1 + 0x18);
        if (uVar3 <= uVar20) {
LAB_0768afd8:
          lVar14 = *(long *)(lVar14 + 0x28);
          goto LAB_0768afe0;
        }
        uVar5 = *(ushort *)(param_1 + (long)(int)uVar20 * 2 + 0x20);
        if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
LAB_0768a894:
          lVar10 = 3;
          if ((uVar20 == param_2) || ((uVar20 == uVar24 || (uVar23 = uVar20 + 1, uVar23 == uVar2))))
          goto LAB_0768a744;
          uVar7 = uVar20;
          if ((int)uVar2 <= (int)uVar24) {
            uVar7 = uVar22;
          }
          if (uVar3 <= uVar23) goto LAB_0768afd8;
          sVar6 = *(short *)(param_1 + (long)(int)uVar23 * 2 + 0x20);
          if (sVar6 == 0x2b) {
            bVar9 = false;
            uVar23 = uVar20 + 2;
          }
          else if (sVar6 == 0x2d) {
            uVar23 = uVar20 + 2;
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          uVar20 = uVar23;
          if ((int)uVar23 < (int)uVar2) {
            puVar13 = (ushort *)(param_1 + 0x20 + (long)(int)uVar23 * 2);
            iVar16 = (param_3 + param_2) - uVar23;
            iVar15 = 0;
            if (uVar23 <= uVar3) {
              iVar15 = uVar3 - uVar23;
            }
            do {
              if (iVar15 == 0) goto LAB_0768afd8;
              uVar5 = *puVar13;
              if (9 < uVar5 - 0x30) goto LAB_0768a740;
              puVar13 = puVar13 + 1;
              iVar8 = (uint)uVar5 + iVar21 * 10 + -0x30;
              if (iVar21 <= iVar8) {
                iVar21 = iVar8;
              }
              iVar16 = iVar16 + -1;
              iVar15 = iVar15 + -1;
              uVar20 = uVar2;
            } while (iVar16 != 0);
          }
          iVar16 = -iVar21;
          uVar22 = uVar7;
          if (!bVar9) {
            iVar16 = iVar21;
          }
        }
        else {
          uVar23 = (uint)uVar5;
          iVar16 = iVar21;
          if (uVar23 == 0x2e) {
            if (uVar20 == param_2) goto LAB_0768a740;
          }
          else {
            uVar7 = uVar23 - 0x30;
            if (9 < uVar7) goto LAB_0768a740;
            if ((uVar20 != param_2 || uVar23 != 0x30) || (uVar20 = uVar2, param_3 == 1)) {
              if (local_b4 < 0x1d) {
                if (local_b4 == 0x1c) {
                  if ((local_a8[0] & 0xff) == 0) {
                    if (uVar18 < 0x6df37f675ef6eae0) {
                      if (uVar18 == 0x6df37f675ef6eadf) {
                        if (0x151fa399 < uVar17) goto LAB_0768aa68;
                        bVar9 = (uVar17 == 0x151fa399 && 0x34 < uVar23) &&
                                (uVar17 != 0x151fa399 || uVar5 != 0x35);
                      }
                      else {
                        bVar9 = false;
                      }
                    }
                    else {
LAB_0768aa68:
                      bVar9 = true;
                    }
                    lVar10 = FUN_05c290f8(local_a8,bVar9,DAT_091b6a48);
                  }
                  if (0xff < local_a8[0]) goto LAB_0768a970;
LAB_0768aac8:
                  uVar17 = (ulong)uVar7 + uVar17 * 10;
                }
                else {
                  if (0x12 < local_b4) goto LAB_0768aac8;
                  uVar18 = (ulong)uVar7 + uVar18 * 10;
                }
                local_b4 = local_b4 + 1;
              }
              else {
LAB_0768a970:
                if ((char)local_a4 == '\0') {
                  lVar10 = FUN_05c2a664(&local_a4,uVar5,DAT_091b6af0);
                }
                iVar19 = iVar19 + 1;
              }
              goto LAB_0768a954;
            }
            if (uVar3 <= uVar1) goto LAB_0768afd8;
            sVar6 = *(short *)(param_1 + 0x20 + (long)(int)uVar1 * 2);
            uVar20 = uVar1;
            if (sVar6 != 0x2e) {
              if ((sVar6 == 0x45) || (sVar6 == 0x65)) goto LAB_0768a894;
              goto LAB_0768a740;
            }
          }
          lVar10 = 3;
          if ((uVar20 + 1 == uVar2) || (bVar9 = uVar24 != uVar2, uVar24 = uVar20 + 1, bVar9))
          goto LAB_0768a744;
        }
LAB_0768a954:
        iVar21 = iVar16;
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar2);
      iVar19 = iVar21 + iVar19 + (uVar24 - uVar22);
      if (local_b4 + -0x13 == 0 || local_b4 < 0x13) goto LAB_0768aae8;
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar25 = System_Decimal__op_Implicit(uVar18,0);
      local_90 = 0;
      uStack_88 = 0;
      System_Decimal___ctor(&local_90,1,0,0,0,local_b4 + -0x13,0);
      auVar25 = System_Decimal__op_Division(auVar25._0_8_,auVar25._8_8_,local_90,uStack_88,0);
      auVar26 = System_Decimal__op_Implicit(uVar17,0);
      auVar25 = System_Decimal__op_Addition
                          (auVar25._0_8_,auVar25._8_8_,auVar26._0_8_,auVar26._8_8_,0);
    }
    else {
      iVar19 = 0;
      uVar18 = 0;
      local_b4 = 0;
LAB_0768aae8:
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar25 = System_Decimal__op_Implicit(uVar18,0);
    }
    uVar12 = auVar25._8_8_;
    uVar11 = auVar25._0_8_;
    *param_4 = auVar25;
    if (iVar19 < 1) {
      if ((local_a4 & 0xff) == 0) {
        uVar18 = 0;
      }
      else {
        local_90 = 0;
        FUN_05c3078c(&local_90,local_a4 >> 0x10,DAT_091b6f98);
        uVar18 = local_90;
      }
      if (((-0x1d < iVar19) && ((uVar18 & 0xff) != 0)) && (0x34 < (int)(uVar18 >> 0x20))) {
        uVar11 = *(undefined8 *)*param_4;
        uVar12 = *(undefined8 *)(*param_4 + 8);
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar25 = System_Decimal__op_Increment(uVar11,uVar12,0);
        *param_4 = auVar25;
      }
      if (-1 < iVar19) goto LAB_0768af8c;
      if (0 < local_b4 + iVar19 + 0x1c) {
        uVar11 = *(undefined8 *)*param_4;
        uVar12 = *(undefined8 *)(*param_4 + 8);
        auVar26 = *param_4;
        auVar25 = *param_4;
        if (iVar19 < -0x1c) {
          local_90 = 0;
          uStack_88 = 0;
          System_Decimal___ctor(&local_90,0x10000000,0x3e250261,0x204fce5e,0,0,0);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar25 = System_Decimal__op_Division(uVar11,uVar12,local_90,uStack_88,0);
          *param_4 = auVar25;
          local_a0 = 0;
          uStack_98 = 0;
          System_Decimal___ctor(&local_a0,1,0,0,0,-0x1c - iVar19,0);
          uVar18 = local_a0;
          uVar11 = uStack_98;
        }
        else {
          local_90 = 0;
          uStack_88 = 0;
          System_Decimal___ctor(&local_90,1,0,0,0,-iVar19,0);
          uVar18 = local_90;
          uVar11 = uStack_88;
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
            uVar18 = local_90;
            uVar11 = uStack_88;
            auVar25 = auVar26;
          }
        }
        goto LAB_0768af80;
      }
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_78 = (*(undefined8 **)(DAT_091837d8 + 0xb8))[1];
      local_80 = **(undefined8 **)(DAT_091837d8 + 0xb8);
      *(undefined8 *)(*param_4 + 8) = uStack_78;
      *(undefined8 *)*param_4 = local_80;
LAB_0768afd0:
      lVar10 = 1;
    }
    else if (iVar19 + local_b4 < 0x1e) {
      if (iVar19 + local_b4 == 0x1d) {
        if (iVar19 + -1 == 0) {
          local_90 = 0;
          uStack_88 = 0;
          System_Decimal___ctor(&local_90,0x99999999,0x99999999,0x19999999,0,0,0);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar18 = System_Decimal__op_Equality(uVar11,uVar12,local_90,uStack_88,0);
          if (((uVar18 & 1) != 0) && ((local_a4 & 0xff) != 0)) {
            local_90 = 0;
            FUN_05c3078c(&local_90,local_a4 >> 0x10,DAT_091b6f98);
            if (((local_90 & 0xff) != 0) && (0x35 < (int)(local_90 >> 0x20))) goto LAB_0768abd4;
          }
        }
        else {
          local_90 = 0;
          uStack_88 = 0;
          System_Decimal___ctor(&local_90,1,0,0,0,iVar19 + -1,0);
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar25 = System_Decimal__op_Division(uVar11,uVar12,local_90,uStack_88,0);
          *param_4 = auVar25;
          local_a0 = 0;
          uStack_98 = 0;
          System_Decimal___ctor(&local_a0,0x99999999,0x99999999,0x19999999,0,0,0);
          uVar18 = System_Decimal__op_GreaterThan(auVar25._0_8_,auVar25._8_8_,local_a0,uStack_98,0);
          if ((uVar18 & 1) != 0) goto LAB_0768abd4;
        }
        auVar26 = *param_4;
        auVar25 = *param_4;
        local_90 = 0;
        uStack_88 = 0;
        System_Decimal___ctor(&local_90,10,0);
        uVar18 = local_90;
        uVar11 = uStack_88;
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar18 = local_90;
          uVar11 = uStack_88;
          auVar25 = auVar26;
        }
LAB_0768af80:
        auVar25 = System_Decimal__op_Multiply(auVar25._0_8_,auVar25._8_8_,uVar18,uVar11,0);
      }
      else {
        local_90 = 0;
        uStack_88 = 0;
        System_Decimal___ctor(&local_90,1,0,0,0,iVar19,0);
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar25 = System_Decimal__op_Division(uVar11,uVar12,local_90,uStack_88,0);
      }
      *param_4 = auVar25;
LAB_0768af8c:
      if (sVar4 != 0x2d) goto LAB_0768afd0;
      uVar11 = *(undefined8 *)*param_4;
      uVar12 = *(undefined8 *)(*param_4 + 8);
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar25 = System_Decimal__op_UnaryNegation(uVar11,uVar12,0);
      lVar10 = 1;
      *param_4 = auVar25;
    }
    else {
LAB_0768abd4:
      lVar10 = 2;
    }
  }
LAB_0768a744:
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
LAB_0768b004:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar10);
}

