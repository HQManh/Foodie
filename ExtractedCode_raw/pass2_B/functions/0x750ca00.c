// rea decompile_all
// name: System.Globalization.TimeSpanParse$$TryParseByFormat
// address: 0x750ca00
// body: available
// range: 0x750ca00-0x750d09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750d09c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint System_Globalization_TimeSpanParse__TryParseByFormat
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,uint param_5,
               long *param_6)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_a4;
  long local_a0 [4];
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_095216cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0920efa0);
    FUN_03f5c2a4(&DAT_0920dc98);
    FUN_03f5c2a4(&DAT_09204ca0);
    FUN_03f5c2a4(&DAT_091fdd60);
    DAT_095216cc = 1;
  }
  local_70 = 0;
  local_78 = 0;
  local_7c = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[0] = 0;
  local_a4 = 0;
  local_68 = 0;
  System_Globalization_TimeSpanParse_TimeSpanTokenizer___ctor
            (local_a0 + 1,param_1,param_2,0xffffffff,0);
  uVar11 = (uint)param_4;
  if (0 < (int)uVar11) {
    bVar5 = false;
    bVar7 = false;
    bVar6 = false;
    bVar4 = false;
    bVar3 = false;
    uVar17 = 0;
    do {
      if (uVar11 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(ushort *)(param_3 + (long)(int)uVar17 * 2);
      if (uVar2 < 0x47) {
        if (uVar2 < 0x26) {
          if (uVar2 == 0x22) {
LAB_0750cca4:
            uVar14 = System_Text_StringBuilderCache__Acquire(0x10,0);
            if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835a8);
            }
            uVar12 = System_DateTimeParse__TryParseQuoteString
                               (param_3,param_4,uVar17,uVar14,&local_7c,0);
            if ((uVar12 & 1) == 0) {
              System_Text_StringBuilderCache__Release(uVar14,0);
              local_d0 = CONCAT62(local_d0._2_6_,uVar2);
              uVar15 = FUN_03f5c42c(DAT_09535460,&local_d0);
              uVar13 = 3;
              uVar14 = DAT_091fdd60;
              goto LAB_0750d014;
            }
            uVar12 = System_Globalization_TimeSpanParse__ParseExactLiteral(local_a0 + 1,uVar14);
            System_Text_StringBuilderCache__Release(uVar14,0);
            if ((uVar12 & 1) != 0) goto LAB_0750ce68;
          }
          else if (uVar2 == 0x25) {
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar8 = System_DateTimeFormat__ParseNextChar(param_3,param_4,uVar17,0);
            if ((-1 < iVar8) && (iVar8 != 0x25)) {
              local_7c = 1;
              goto LAB_0750ce68;
            }
          }
        }
        else {
          if (uVar2 == 0x27) goto LAB_0750cca4;
          if (uVar2 == 0x46) {
            if (*(int *)(DAT_09183568 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,0x46,0);
            if ((bool)(local_7c < 8 & (bVar3 ^ 1U))) {
              System_Globalization_TimeSpanParse__ParseExactDigits
                        (local_a0 + 1,local_7c,local_7c,(long)&local_78 + 4,&local_78);
LAB_0750ce64:
              bVar3 = true;
              goto LAB_0750ce68;
            }
          }
        }
LAB_0750cff0:
        puVar16 = &DAT_09204ca0;
        goto LAB_0750d004;
      }
      iVar8 = 2;
      if (0x68 < uVar2) {
        if (uVar2 == 0x6d) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,0x6d,0);
          if (!bVar6 && local_7c < 3) {
            if (local_7c != 1) {
              iVar8 = local_7c;
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            local_70 = local_70 & 0xffffffff;
            uVar12 = System_Globalization_TimeSpanParse__ParseExactDigits
                               (local_a0 + 1,local_7c,iVar8,&local_d0,(long)&local_70 + 4);
            if ((uVar12 & 1) != 0) {
              bVar6 = true;
              goto LAB_0750ce68;
            }
          }
        }
        else if (uVar2 == 0x73) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,0x73,0);
          if (!bVar4 && local_7c < 3) {
            if (local_7c != 1) {
              iVar8 = local_7c;
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            local_70 = local_70 & 0xffffffff00000000;
            uVar12 = System_Globalization_TimeSpanParse__ParseExactDigits
                               (local_a0 + 1,local_7c,iVar8,&local_d0,&local_70);
            if ((uVar12 & 1) != 0) {
              bVar4 = true;
              goto LAB_0750ce68;
            }
          }
        }
        goto LAB_0750cff0;
      }
      if (uVar2 != 0x5c) {
        if (uVar2 == 100) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,100,0);
          local_a4 = 0;
          if (!bVar7 && local_7c < 9) {
            iVar8 = local_7c;
            if (local_7c < 2) {
              iVar8 = 1;
            }
            iVar1 = 8;
            if (1 < local_7c) {
              iVar1 = local_7c;
            }
            uVar12 = System_Globalization_TimeSpanParse__ParseExactDigits
                               (local_a0 + 1,iVar8,iVar1,&local_a4,(long)&local_68 + 4);
            if ((uVar12 & 1) != 0) {
              bVar7 = true;
              goto LAB_0750ce68;
            }
          }
        }
        else if (uVar2 == 0x66) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,0x66,0);
          if ((!bVar3 && local_7c < 8) &&
             (uVar12 = System_Globalization_TimeSpanParse__ParseExactDigits
                                 (local_a0 + 1,local_7c,local_7c,(long)&local_78 + 4,&local_78),
             (uVar12 & 1) != 0)) goto LAB_0750ce64;
        }
        else if (uVar2 == 0x68) {
          if (*(int *)(DAT_09183568 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_7c = System_DateTimeFormat__ParseRepeatPattern(param_3,param_4,uVar17,0x68,0);
          if (!bVar5 && local_7c < 3) {
            if (local_7c != 1) {
              iVar8 = local_7c;
            }
            local_d0 = local_d0 & 0xffffffff00000000;
            local_68 = local_68 & 0xffffffff00000000;
            uVar12 = System_Globalization_TimeSpanParse__ParseExactDigits
                               (local_a0 + 1,local_7c,iVar8,&local_d0,&local_68);
            if ((uVar12 & 1) != 0) {
              bVar5 = true;
              goto LAB_0750ce68;
            }
          }
        }
        goto LAB_0750cff0;
      }
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_DateTimeFormat__ParseNextChar(param_3,param_4,uVar17,0);
      if (((int)uVar9 < 0) ||
         (uVar10 = System_Globalization_TimeSpanParse_TimeSpanTokenizer__get_NextChar
                             (local_a0 + 1,0), (uVar10 & 0xffff) != (uVar9 & 0xffff)))
      goto LAB_0750cff0;
      local_7c = 2;
LAB_0750ce68:
      uVar17 = local_7c + uVar17;
    } while ((int)uVar17 < (int)uVar11);
  }
  uVar12 = System_Globalization_TimeSpanParse_TimeSpanTokenizer__get_EOL(local_a0 + 1,0);
  if ((uVar12 & 1) == 0) {
    puVar16 = &DAT_0920dc98;
LAB_0750d004:
    uVar14 = *puVar16;
    uVar13 = 2;
  }
  else {
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_d0,local_68._4_4_,0);
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_f0,local_68 & 0xffffffff,0);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_110,local_70._4_4_,0);
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_130,local_70 & 0xffffffff,0);
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor
              (&local_150,local_78 & 0xffffffff,local_78._4_4_,0);
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_188 = uStack_e8;
    local_190 = local_f0;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_1a8 = uStack_108;
    local_1b0 = local_110;
    uStack_198 = uStack_f8;
    uStack_1a0 = uStack_100;
    uStack_1c8 = uStack_128;
    local_1d0 = local_130;
    uStack_1b8 = uStack_118;
    uStack_1c0 = uStack_120;
    uStack_1e8 = uStack_148;
    local_1f0 = local_150;
    uStack_1d8 = uStack_138;
    uStack_1e0 = uStack_140;
    uVar12 = System_Globalization_TimeSpanParse__TryTimeToTicks
                       ((param_5 & 1) == 0,&local_170,&local_190,&local_1b0,&local_1d0,&local_1f0,
                        local_a0);
    if ((uVar12 & 1) != 0) {
      if ((param_5 & 1) != 0) {
        local_a0[0] = -local_a0[0];
      }
      *param_6 = local_a0[0];
      uVar11 = 1;
      goto LAB_0750d020;
    }
    uVar13 = 4;
    uVar14 = DAT_0920efa0;
  }
  uVar15 = 0;
LAB_0750d014:
  uVar11 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                     (param_6,uVar13,uVar14,uVar15,0,0);
LAB_0750d020:
  return uVar11 & 1;
}

