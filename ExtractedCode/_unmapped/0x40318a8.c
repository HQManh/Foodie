// rea decompile_all
// name: FUN_040318a8
// address: 0x40318a8
// body: available
// range: 0x40318a8-0x40322b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40322a0 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40322a4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40322a8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40322ac to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40322b0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_040318a8(long *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long extraout_x1;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  void *pvVar28;
  size_t sVar29;
  undefined1 auVar30 [16];
  long local_150;
  long local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  ulong local_110;
  char local_108;
  undefined1 auStack_100 [160];
  
  FUN_04033844(auStack_100,param_1);
  auVar7._8_8_ = local_140._8_8_;
  auVar7._0_8_ = local_140._0_8_;
  auVar30._8_8_ = local_140._8_8_;
  auVar30._0_8_ = local_140._0_8_;
  pcVar21 = (char *)*param_1;
  pcVar19 = (char *)param_1[1];
  if (pcVar19 == pcVar21) {
LAB_04031970:
    local_120 = (local_120 >> 0x10 & 0xffff) << 0x10;
    local_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_118[0] = 0;
    local_108 = '\0';
    puVar13 = (undefined8 *)FUN_040339f8(param_1,&local_120);
    auVar30._8_8_ = local_140._8_8_;
    auVar30._0_8_ = local_140._0_8_;
    auVar4._8_8_ = local_140._8_8_;
    auVar4._0_8_ = local_140._0_8_;
    local_128 = puVar13;
    if (puVar13 == (undefined8 *)0x0) goto LAB_04032218;
    lVar16 = param_1[0x5a];
    uVar12 = param_1[0x5b] - lVar16 >> 3;
    if (local_110 < uVar12) {
      puVar22 = (undefined8 *)param_1[0x53];
      if ((puVar22 != (undefined8 *)param_1[0x54]) &&
         (plVar25 = (long *)*puVar22, plVar25 != (long *)0x0)) {
        plVar23 = (long *)(lVar16 + local_110 * 8);
        lVar18 = *plVar25;
        lVar24 = *plVar23;
        uVar26 = *(ulong *)(lVar24 + 0x10);
        uVar27 = local_110;
        if (uVar26 < (ulong)(plVar25[1] - lVar18 >> 3)) {
          do {
            uVar27 = uVar27 + 1;
            *(undefined8 *)(lVar24 + 0x18) = *(undefined8 *)(lVar18 + uVar26 * 8);
            if (uVar12 == uVar27) goto LAB_04031b10;
            plVar25 = (long *)*puVar22;
            if (plVar25 == (long *)0x0) break;
            lVar24 = *(long *)(lVar16 + uVar27 * 8);
            lVar18 = *plVar25;
            uVar26 = *(ulong *)(lVar24 + 0x10);
          } while (uVar26 < (ulong)(plVar25[1] - lVar18 >> 3));
          if (uVar12 <= uVar27) goto LAB_04031b14;
        }
      }
    }
    else {
      if (uVar12 < local_110) {
        FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
                     "shrinkToSize() can\'t expand!");
LAB_040322a0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      plVar23 = (long *)(lVar16 + local_110 * 8);
LAB_04031b10:
      param_1[0x5b] = (long)plVar23;
LAB_04031b14:
      pbVar17 = (byte *)*param_1;
      pbVar20 = (byte *)param_1[1];
      local_140 = auVar4;
      if ((pbVar20 == pbVar17) ||
         ((local_140 = auVar30, *pbVar17 - 0x2e < 0x32 &&
          ((1L << ((ulong)(*pbVar17 - 0x2e) & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_04032218;
      local_130 = 0;
      if (((ulong)((long)pbVar20 - (long)pbVar17) < 0xd) ||
         (*(long *)pbVar17 != 0x6c62616e65396155 || *(long *)(pbVar17 + 5) != 0x4966695f656c6261)) {
        uVar12 = local_120;
joined_r0x04032278:
        local_148 = 0;
        bVar10 = (char)local_120 == '\0';
        local_120 = uVar12;
        if (bVar10) {
          local_148 = 0;
          local_120._1_1_ = (char)(uVar12 >> 8);
          bVar10 = local_120._1_1_ != '\0';
          if (bVar10) {
            local_148 = FUN_040324c0(param_1);
            auVar30 = local_140;
            if (local_148 == 0) goto LAB_04032214;
          }
        }
        pcVar21 = (char *)*param_1;
        pcVar19 = (char *)param_1[1];
        local_140._0_8_ = 0;
        local_140._8_8_ = 0;
        auVar30 = ZEXT816(0);
        if ((pcVar21 == pcVar19) || (*pcVar21 != 'v')) {
          plVar23 = param_1 + 5;
          lVar16 = param_1[3] - param_1[2] >> 3;
          do {
            puVar22 = (undefined8 *)FUN_040324c0(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (puVar22 == (undefined8 *)0x0) goto LAB_04032214;
            plVar25 = (long *)param_1[3];
            puVar13 = puVar22;
            if ((local_108 != '\0') && (lVar16 == (long)plVar25 - param_1[2] >> 3)) {
              pvVar28 = (void *)param_1[0x266];
              lVar18 = *(long *)((long)pvVar28 + 8);
              puVar14 = pvVar28;
              if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
                puVar14 = malloc(0x1000);
                if (puVar14 == (void *)0x0) goto LAB_040322a0;
                lVar18 = 0;
                *puVar14 = pvVar28;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar18 + 0x20;
              puVar13 = (undefined8 *)((long)puVar14 + lVar18 + 0x10);
              *puVar13 = &UNK_08fb0348;
              *(undefined1 *)((long)puVar14 + lVar18 + 0x18) = 0x57;
              *(undefined8 **)((long)puVar14 + lVar18 + 0x20) = puVar22;
              *(ushort *)((long)puVar14 + lVar18 + 0x19) =
                   *(ushort *)((long)puVar14 + lVar18 + 0x19) & 0xf000 | 0x540;
              plVar25 = (long *)param_1[3];
            }
            if (plVar25 == (long *)param_1[4]) {
              plVar15 = (long *)param_1[2];
              sVar29 = (long)plVar25 - (long)plVar15;
              if (plVar15 == plVar23) {
                pvVar28 = malloc(sVar29 * 2);
                if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                if (plVar25 != plVar23) {
                  memcpy(pvVar28,plVar23,sVar29);
                }
                param_1[2] = (long)pvVar28;
              }
              else {
                pvVar28 = realloc(plVar15,sVar29 * 2);
                param_1[2] = (long)pvVar28;
                if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              plVar25 = (long *)((long)pvVar28 + sVar29);
              param_1[3] = (long)plVar25;
              param_1[4] = (long)((long)pvVar28 + ((long)sVar29 >> 2) * 8);
            }
            param_1[3] = (long)(plVar25 + 1);
            *plVar25 = (long)puVar13;
          } while (((byte *)param_1[1] != (byte *)*param_1) &&
                  ((uVar11 = *(byte *)*param_1 - 0x2e, 0x31 < uVar11 ||
                   ((1L << ((ulong)uVar11 & 0x3f) & 0x2000800800001U) == 0))));
          auVar30 = FUN_04034628(param_1,lVar16);
          pcVar21 = (char *)*param_1;
          pcVar19 = (char *)param_1[1];
        }
        else {
          pcVar21 = pcVar21 + 1;
          *param_1 = (long)pcVar21;
        }
        local_150 = 0;
        local_140 = auVar30;
        if ((pcVar21 != pcVar19) && (*pcVar21 == 'Q')) {
          uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar21 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
          local_150 = FUN_0403770c(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
          auVar30 = local_140;
          if (local_150 == 0) goto LAB_04032214;
        }
        puVar13 = (undefined8 *)
                  FUN_04034784(param_1,&local_148,&local_128,local_140,&local_130,&local_150,
                               (ulong)&local_120 | 4,local_118);
        goto LAB_04032218;
      }
      lVar16 = param_1[2];
      lVar18 = param_1[3];
      pbVar17 = pbVar17 + 0xd;
      plVar23 = param_1 + 5;
      *param_1 = (long)pbVar17;
      while( true ) {
        if ((pbVar17 != pbVar20) && (*pbVar17 == 0x45)) {
          *param_1 = (long)(pbVar17 + 1);
          local_140 = FUN_04034628(param_1,lVar18 - lVar16 >> 3);
          local_130 = FUN_04034588(param_1,local_140);
          uVar12 = local_120;
          goto joined_r0x04032278;
        }
        lVar24 = FUN_0403413c(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (lVar24 == 0) break;
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar15 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar15;
          if (plVar15 == plVar23) {
            pvVar28 = malloc(sVar29 * 2);
            if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar23) {
              memcpy(pvVar28,plVar23,sVar29);
            }
            param_1[2] = (long)pvVar28;
          }
          else {
            pvVar28 = realloc(plVar15,sVar29 * 2);
            param_1[2] = (long)pvVar28;
            if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar28 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar28 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar24;
        pbVar17 = (byte *)*param_1;
        pbVar20 = (byte *)param_1[1];
      }
    }
  }
  else if (*pcVar21 == 'G') {
    if (1 < (ulong)((long)pcVar19 - (long)pcVar21)) {
      cVar2 = pcVar21[1];
      if (cVar2 == 'I') {
        local_120 = 0;
        *param_1 = (long)(pcVar21 + 2);
        uVar11 = FUN_04035390(param_1,&local_120);
        uVar12 = local_120;
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if ((uVar11 & 1) == 0 && local_120 != 0) {
          pvVar28 = (void *)param_1[0x266];
          lVar16 = *(long *)((long)pvVar28 + 8);
          puVar22 = pvVar28;
          if (lVar16 - 0xfc0U < 0xfffffffffffff010) {
            puVar22 = malloc(0x1000);
            if (puVar22 == (void *)0x0) goto LAB_040322a0;
            lVar16 = 0;
            *puVar22 = pvVar28;
            puVar22[1] = 0;
            param_1[0x266] = (long)puVar22;
          }
          *(long *)((long)puVar22 + 8) = lVar16 + 0x30;
          puVar13 = (undefined8 *)((long)puVar22 + lVar16 + 0x10);
          *puVar13 = &UNK_08fae198;
          *(ulong *)((long)puVar22 + lVar16 + 0x30) = uVar12;
          *(undefined1 *)((long)puVar22 + lVar16 + 0x18) = 0x15;
          *(char **)((long)puVar22 + lVar16 + 0x20) = "initializer for module ";
          *(undefined8 *)((long)puVar22 + lVar16 + 0x28) = 0x17;
          *(ushort *)((long)puVar22 + lVar16 + 0x19) =
               *(ushort *)((long)puVar22 + lVar16 + 0x19) & 0xf000 | 0x540;
          goto LAB_04032218;
        }
      }
      else if (cVar2 == 'R') {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_040339f8(param_1,0);
        auVar9._8_8_ = local_140._8_8_;
        auVar9._0_8_ = local_140._0_8_;
        auVar8._8_8_ = local_140._8_8_;
        auVar8._0_8_ = local_140._0_8_;
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          pbVar17 = (byte *)*param_1;
          pbVar20 = (byte *)param_1[1];
          if (((pbVar20 == pbVar17) || (bVar1 = *pbVar17, bVar1 < 0x30)) ||
             ((0x39 < bVar1 && (0x19 < bVar1 - 0x41)))) {
            bVar10 = true;
joined_r0x04031d00:
            if ((pbVar17 == pbVar20) || (*pbVar17 != 0x5f)) {
              auVar30 = auVar8;
              if (!bVar10) goto LAB_04032214;
            }
            else {
              *param_1 = (long)(pbVar17 + 1);
            }
            puVar13 = (undefined8 *)FUN_040352e0(param_1,&local_120);
            goto LAB_04032218;
          }
          do {
            bVar1 = *pbVar17;
            if ((bVar1 < 0x30) || ((0x39 < bVar1 && (0x19 < bVar1 - 0x41)))) {
              bVar10 = false;
              goto joined_r0x04031d00;
            }
            pbVar17 = pbVar17 + 1;
            *param_1 = (long)pbVar17;
            auVar30 = auVar9;
          } while (pbVar17 != pbVar20);
        }
      }
      else {
        auVar30 = auVar7;
        if (cVar2 == 'V') {
          *param_1 = (long)(pcVar21 + 2);
          lVar16 = FUN_040339f8(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (lVar16 != 0) {
            pvVar28 = (void *)param_1[0x266];
            lVar18 = *(long *)((long)pvVar28 + 8);
            puVar22 = pvVar28;
            if (lVar18 - 0xfc0U < 0xfffffffffffff010) {
              puVar22 = malloc(0x1000);
              if (puVar22 == (void *)0x0) goto LAB_040322a0;
              lVar18 = 0;
              *puVar22 = pvVar28;
              puVar22[1] = 0;
              param_1[0x266] = (long)puVar22;
            }
            *(long *)((long)puVar22 + 8) = lVar18 + 0x30;
            puVar13 = (undefined8 *)((long)puVar22 + lVar18 + 0x10);
            *puVar13 = &UNK_08fae198;
            *(long *)((long)puVar22 + lVar18 + 0x30) = lVar16;
            *(undefined1 *)((long)puVar22 + lVar18 + 0x18) = 0x15;
            *(char **)((long)puVar22 + lVar18 + 0x20) = "guard variable for ";
            *(undefined8 *)((long)puVar22 + lVar18 + 0x28) = 0x13;
            *(ushort *)((long)puVar22 + lVar18 + 0x19) =
                 *(ushort *)((long)puVar22 + lVar18 + 0x19) & 0xf000 | 0x540;
            goto LAB_04032218;
          }
        }
      }
    }
  }
  else {
    if (*pcVar21 != 'T') goto LAB_04031970;
    if ((ulong)((long)pcVar19 - (long)pcVar21) < 2) {
LAB_04031e30:
      pcVar21 = pcVar21 + 1;
      *param_1 = (long)pcVar21;
      if (pcVar19 == pcVar21) {
        bVar10 = false;
        uVar12 = FUN_04034dcc(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      else {
        bVar10 = *pcVar21 == 'v';
        uVar12 = FUN_04034dcc(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      if ((uVar12 & 1) == 0) {
        local_120 = FUN_040318a8(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          if (bVar10) {
            puVar13 = (undefined8 *)FUN_04035184();
          }
          else {
            puVar13 = (undefined8 *)FUN_04035234(param_1,&local_120);
          }
          goto LAB_04032218;
        }
      }
    }
    else {
      bVar1 = pcVar21[1];
      if (bVar1 < 0x53) {
        if (bVar1 < 0x48) {
          if (bVar1 == 0x41) {
            *param_1 = (long)(pcVar21 + 2);
            local_120 = FUN_0403413c(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_04034a5c(param_1,&local_120);
              goto LAB_04032218;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_04031e30;
            *param_1 = (long)(pcVar21 + 2);
            local_120 = FUN_040324c0(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              FUN_04032380(param_1,1);
              auVar6._8_8_ = local_140._8_8_;
              auVar6._0_8_ = local_140._0_8_;
              auVar5._8_8_ = local_140._8_8_;
              auVar5._0_8_ = local_140._0_8_;
              auVar30._8_8_ = local_140._8_8_;
              auVar30._0_8_ = local_140._0_8_;
              if (((extraout_x1 != 0) &&
                  (pcVar21 = (char *)*param_1, auVar30 = auVar5, pcVar21 != (char *)param_1[1])) &&
                 (auVar30 = auVar6, *pcVar21 == '_')) {
                *param_1 = (long)(pcVar21 + 1);
                local_140._0_8_ = FUN_040324c0(param_1);
                auVar30._8_8_ = local_140._8_8_;
                auVar30._0_8_ = local_140._0_8_;
                if (local_140._0_8_ != 0) {
                  puVar13 = (undefined8 *)FUN_0403502c(param_1,local_140,&local_120);
                  goto LAB_04032218;
                }
              }
            }
          }
        }
        else if (bVar1 == 0x48) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_040339f8(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_040350d4(param_1,&local_120);
            goto LAB_04032218;
          }
        }
        else {
          if (bVar1 != 0x49) goto LAB_04031e30;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_040324c0(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_04034c6c(param_1,&local_120);
            goto LAB_04032218;
          }
        }
      }
      else if (bVar1 < 0x56) {
        if (bVar1 == 0x53) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_040324c0(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_04034d1c(param_1,&local_120);
            goto LAB_04032218;
          }
        }
        else {
          if (bVar1 != 0x54) goto LAB_04031e30;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_040324c0(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_04034bbc(param_1,&local_120);
            goto LAB_04032218;
          }
        }
      }
      else if (bVar1 == 0x56) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_040324c0(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)FUN_04034b0c(param_1,&local_120);
          goto LAB_04032218;
        }
      }
      else if (bVar1 == 0x57) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_040339f8(param_1,0);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)
                    FUN_0403240c(param_1,"thread-local wrapper routine for ",&local_120);
          goto LAB_04032218;
        }
      }
      else {
        if (bVar1 != 99) goto LAB_04031e30;
        *param_1 = (long)(pcVar21 + 2);
        uVar12 = FUN_04034dcc(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_04034dcc(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if ((uVar12 & 1) == 0) {
            local_120 = FUN_040318a8(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_04034f7c(param_1,&local_120);
              goto LAB_04032218;
            }
          }
        }
      }
    }
  }
LAB_04032214:
  puVar13 = (undefined8 *)0x0;
  local_140 = auVar30;
LAB_04032218:
  FUN_04034878(auStack_100);
  return puVar13;
}

