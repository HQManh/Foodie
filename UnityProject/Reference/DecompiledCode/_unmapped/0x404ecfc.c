// rea decompile_all
// name: FUN_0404ecfc
// address: 0x404ecfc
// body: available
// range: 0x404ecfc-0x404ed77 inclusive
// range: 0x404ed8c-0x404edb3 inclusive
// range: 0x404f47c-0x404f4a3 inclusive
// range: 0x404f574-0x404f5ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404f5a8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_0404ecfc(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  ulong local_380 [99];
  byte *local_68;
  
  local_68 = param_1;
  lVar10 = FUN_0404eb34(&local_68,param_1 + 0x14);
  local_380[0] = param_4;
  pbVar6 = local_68 + lVar10;
  if (local_68 < pbVar6) {
    puVar1 = (ulong *)(param_3 + 0xf0);
    puVar2 = (ulong *)(param_3 + 0xe8);
    puVar3 = (ulong *)(param_3 + 0x108);
    puVar4 = (ulong *)(param_3 + 0xf8);
    puVar18 = local_380;
    puVar5 = (ulong *)(param_3 + 0x100);
    pbVar17 = local_68;
    do {
      pbVar12 = pbVar17 + 1;
      local_68 = pbVar12;
      bVar8 = *pbVar17;
      uVar9 = (uint)bVar8;
      if (0x91 < uVar9 - 3) {
code_r0x0404f578:
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = (uint)bVar8;
      puVar13 = puVar4;
      switch(uVar9) {
      case 3:
      case 0xe:
      case 0xf:
        uVar15 = *(ulong *)(pbVar17 + 1);
        local_68 = pbVar17 + 9;
        goto code_r0x0404f1e4;
      case 4:
      case 5:
      case 7:
        goto code_r0x0404f578;
      case 6:
        puVar13 = (ulong *)*puVar18;
code_r0x0404f174:
        *puVar18 = *puVar13;
        goto code_r0x0404ed80;
      case 8:
        uVar15 = (ulong)pbVar17[1];
        goto code_r0x0404f148;
      case 9:
        uVar15 = (ulong)(char)pbVar17[1];
code_r0x0404f148:
        local_68 = pbVar17 + 2;
        goto code_r0x0404f1e4;
      case 10:
        uVar15 = (ulong)*(ushort *)(pbVar17 + 1);
        local_68 = pbVar17 + 3;
        goto code_r0x0404f1e4;
      case 0xb:
        uVar15 = (ulong)*(short *)(pbVar17 + 1);
        local_68 = pbVar17 + 3;
        goto code_r0x0404f1e4;
      case 0xc:
        uVar15 = (ulong)*(uint *)(pbVar17 + 1);
        local_68 = pbVar17 + 5;
        goto code_r0x0404f1e4;
      case 0xd:
        uVar15 = (ulong)*(int *)(pbVar17 + 1);
        local_68 = pbVar17 + 5;
        goto code_r0x0404f1e4;
      case 0x10:
        uVar15 = FUN_0404eb34(&local_68,pbVar6);
        puVar18 = puVar18 + 1;
        *puVar18 = uVar15;
        goto code_r0x0404ed80;
      case 0x11:
        uVar15 = 0;
        uVar11 = 0;
        pbVar17 = pbVar12;
        do {
          if (pbVar17 == pbVar6) {
            fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar17;
          pbVar12 = pbVar12 + 1;
          uVar16 = uVar15 & 0x3f;
          uVar15 = uVar15 + 7;
          uVar11 = ((ulong)bVar8 & 0x7f) << uVar16 | uVar11;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar12;
        uVar16 = -1L << (uVar15 & 0x3f);
        if (0x38 < (int)uVar15 - 7U || bVar8 < 0x40) {
          uVar16 = 0;
        }
        puVar18 = puVar18 + 1;
        *puVar18 = uVar11 | uVar16;
        goto code_r0x0404ed80;
      case 0x12:
        uVar15 = *puVar18;
        goto code_r0x0404ed7c;
      case 0x13:
        puVar18 = puVar18 + -1;
        goto code_r0x0404ed80;
      case 0x14:
        uVar15 = puVar18[-1];
        goto code_r0x0404ed7c;
      case 0x15:
        local_68 = pbVar17 + 2;
        uVar15 = puVar18[-(ulong)pbVar17[1]];
code_r0x0404f1e4:
code_r0x0404ed7c:
        puVar18[1] = uVar15;
        puVar18 = puVar18 + 1;
        goto code_r0x0404ed80;
      case 0x16:
        auVar19 = NEON_ext(*(undefined1 (*) [16])(puVar18 + -1),*(undefined1 (*) [16])(puVar18 + -1)
                           ,8,1);
        *puVar18 = auVar19._8_8_;
        puVar18[-1] = auVar19._0_8_;
        goto code_r0x0404ed80;
      case 0x17:
        uVar15 = *puVar18;
        *puVar18 = SUB168(*(undefined1 (*) [16])(puVar18 + -2),8);
        puVar18[-1] = SUB168(*(undefined1 (*) [16])(puVar18 + -2),0);
        puVar18[-2] = uVar15;
        goto code_r0x0404ed80;
      case 0x18:
        puVar13 = (ulong *)*puVar18;
        puVar18 = puVar18 + -1;
        *puVar18 = *puVar13;
        goto code_r0x0404ed80;
      case 0x19:
        uVar15 = *puVar18;
        if ((long)uVar15 < 0) goto code_r0x0404f31c;
        goto code_r0x0404ed80;
      case 0x1a:
        uVar15 = puVar18[-1] & *puVar18;
        break;
      case 0x1b:
        uVar15 = 0;
        if (*puVar18 != 0) {
          uVar15 = (long)puVar18[-1] / (long)*puVar18;
        }
        break;
      case 0x1c:
        uVar15 = puVar18[-1] - *puVar18;
        break;
      case 0x1d:
        uVar15 = *puVar18;
        lVar10 = 0;
        if (uVar15 != 0) {
          lVar10 = (long)puVar18[-1] / (long)uVar15;
        }
        uVar15 = puVar18[-1] - lVar10 * uVar15;
        break;
      case 0x1e:
        uVar15 = puVar18[-1] * *puVar18;
        break;
      case 0x1f:
        uVar15 = *puVar18;
code_r0x0404f31c:
        *puVar18 = -uVar15;
        goto code_r0x0404ed80;
      case 0x20:
        *puVar18 = ~*puVar18;
        goto code_r0x0404ed80;
      case 0x21:
        uVar15 = puVar18[-1] | *puVar18;
        break;
      case 0x22:
        uVar15 = puVar18[-1] + *puVar18;
        break;
      case 0x23:
        lVar10 = FUN_0404eb34(&local_68,pbVar6);
        *puVar18 = *puVar18 + lVar10;
        goto code_r0x0404ed80;
      case 0x24:
        uVar15 = puVar18[-1] << (*puVar18 & 0x3f);
        break;
      case 0x25:
        uVar15 = puVar18[-1] >> (*puVar18 & 0x3f);
        break;
      case 0x26:
        uVar15 = (long)puVar18[-1] >> (*puVar18 & 0x3f);
        break;
      case 0x27:
        uVar15 = puVar18[-1] ^ *puVar18;
        break;
      case 0x28:
        puVar13 = puVar18 + -1;
        uVar15 = *puVar18;
        local_68 = pbVar17 + 3;
        puVar18 = puVar13;
        if (uVar15 != 0) {
          local_68 = pbVar17 + 3 + *(short *)(pbVar17 + 1);
        }
        goto code_r0x0404ed80;
      case 0x29:
        uVar15 = (ulong)(puVar18[-1] == *puVar18);
        break;
      case 0x2a:
        uVar15 = (ulong)(*puVar18 <= puVar18[-1]);
        break;
      case 0x2b:
        uVar15 = (ulong)(*puVar18 < puVar18[-1]);
        break;
      case 0x2c:
        uVar15 = (ulong)(puVar18[-1] <= *puVar18);
        break;
      case 0x2d:
        uVar15 = (ulong)(puVar18[-1] < *puVar18);
        break;
      case 0x2e:
        uVar15 = (ulong)(puVar18[-1] != *puVar18);
        break;
      case 0x2f:
        local_68 = pbVar17 + (long)*(short *)(pbVar17 + 1) + 3;
        goto code_r0x0404ed80;
      default:
        uVar15 = (ulong)(uVar14 - 0x30);
        goto code_r0x0404ed7c;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        if (((uVar14 != 0x6f) && (puVar13 = puVar1, bVar8 != 0x6e)) &&
           (puVar13 = puVar2, bVar8 != 0x6d)) {
          puVar13 = (ulong *)(param_3 + (ulong)(uVar14 - 0x50) * 8);
        }
        goto code_r0x0404ed78;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar15 = 0;
        uVar11 = 0;
        pbVar17 = pbVar12;
        do {
          if (pbVar17 == pbVar6) {
            fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar7 = *pbVar17;
          pbVar12 = pbVar12 + 1;
          uVar16 = uVar15 & 0x3f;
          uVar15 = uVar15 + 7;
          uVar11 = ((ulong)bVar7 & 0x7f) << uVar16 | uVar11;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar7 < '\0');
        local_68 = pbVar12;
        uVar16 = -1L << (uVar15 & 0x3f);
        if (0x38 < (int)uVar15 - 7U || bVar7 < 0x40) {
          uVar16 = 0;
        }
        if (bVar8 < 0x8e) {
          if (((bVar8 != 0x6e) && (puVar13 = puVar5, bVar8 != 0x6f)) &&
             (puVar13 = puVar2, bVar8 != 0x8d)) goto code_r0x0404eeb8;
        }
        else if (bVar8 < 0x90) {
          puVar13 = puVar1;
          if ((bVar8 != 0x8e) && (puVar13 = puVar4, uVar14 != 0x8f)) {
code_r0x0404eeb8:
            if (0x1c < uVar9 - 0x70) {
              fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar13 = (ulong *)(param_3 + (ulong)(uVar9 - 0x70) * 8);
          }
        }
        else {
          puVar13 = puVar5;
          if ((bVar8 != 0x90) && (puVar13 = puVar3, bVar8 != 0x92)) goto code_r0x0404eeb8;
        }
        uVar15 = *puVar13 + (uVar11 | uVar16);
        goto code_r0x0404ed7c;
      case 0x90:
        uVar9 = FUN_0404eb34(&local_68,pbVar6);
        if ((int)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar13 = puVar5, uVar9 != 0xffffffff)) &&
             (puVar13 = puVar2, uVar9 != 0x1d)) goto code_r0x0404f41c;
        }
        else if ((int)uVar9 < 0x20) {
          puVar13 = puVar1;
          if ((uVar9 != 0x1e) && (puVar13 = puVar4, uVar9 != 0x1f)) {
code_r0x0404f41c:
            if (0x1c < uVar9) {
              fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar13 = (ulong *)(param_3 + (ulong)uVar9 * 8);
          }
        }
        else {
          puVar13 = puVar5;
          if ((uVar9 != 0x20) && (puVar13 = puVar3, uVar9 != 0x22)) goto code_r0x0404f41c;
        }
code_r0x0404ed78:
        uVar15 = *puVar13;
        goto code_r0x0404ed7c;
      case 0x91:
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar9 = FUN_0404eb34(&local_68,pbVar6);
        uVar15 = 0;
        uVar11 = 0;
        pbVar17 = local_68;
        pbVar12 = local_68;
        do {
          if (pbVar12 == pbVar6) {
            fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar8 = *pbVar12;
          pbVar17 = pbVar17 + 1;
          uVar16 = uVar15 & 0x3f;
          uVar15 = uVar15 + 7;
          uVar11 = ((ulong)bVar8 & 0x7f) << uVar16 | uVar11;
          pbVar12 = pbVar12 + 1;
        } while ((char)bVar8 < '\0');
        local_68 = pbVar17;
        uVar16 = -1L << (uVar15 & 0x3f);
        if (0x38 < (int)uVar15 - 7U || bVar8 < 0x40) {
          uVar16 = 0;
        }
        if ((int)uVar9 < 0x1e) {
          if (((uVar9 != 0xfffffffe) && (puVar13 = puVar5, uVar9 != 0xffffffff)) &&
             (puVar13 = puVar2, uVar9 != 0x1d)) goto code_r0x0404f444;
        }
        else if ((int)uVar9 < 0x20) {
          puVar13 = puVar1;
          if ((uVar9 != 0x1e) && (puVar13 = puVar4, uVar9 != 0x1f)) {
code_r0x0404f444:
            if (0x1c < uVar9) {
              fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getRegister",
                      "unsupported arm64 register");
              fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            puVar13 = (ulong *)(param_3 + (ulong)uVar9 * 8);
          }
        }
        else {
          puVar13 = puVar5;
          if ((uVar9 != 0x20) && (puVar13 = puVar3, uVar9 != 0x22)) goto code_r0x0404f444;
        }
        uVar15 = *puVar13 + (uVar11 | uVar16);
        goto code_r0x0404ed7c;
      case 0x93:
        fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_68 = pbVar17 + 2;
        puVar13 = (ulong *)*puVar18;
        bVar8 = pbVar17[1];
        if (bVar8 < 4) {
          if (bVar8 == 1) {
            *puVar18 = (ulong)(byte)*puVar13;
          }
          else {
            if (bVar8 != 2) {
code_r0x0404f61c:
              fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","evaluateExpression",
                      "DW_OP_deref_size with bad size");
              fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar18 = (ulong)(ushort)*puVar13;
          }
        }
        else {
          if (bVar8 != 4) {
            if (bVar8 != 8) goto code_r0x0404f61c;
            goto code_r0x0404f174;
          }
          *puVar18 = (ulong)(uint)*puVar13;
        }
        goto code_r0x0404ed80;
      }
      puVar18[-1] = uVar15;
      puVar18 = puVar18 + -1;
code_r0x0404ed80:
      pbVar17 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar18;
  }
  return param_4;
}

