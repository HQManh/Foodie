// rea decompile_all
// name: FUN_0404c950
// address: 0x404c950
// body: available
// range: 0x404c950-0x404cc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404cc14 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_0404c950(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar9 = param_2 + 1;
  uVar12 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar12 = *(ulong *)(param_2 + 1);
    puVar9 = param_2 + 3;
    pbVar1 = (byte *)(uVar12 + (long)puVar9);
  }
  else {
    pbVar1 = (byte *)((long)puVar9 + uVar12);
  }
  if (uVar12 == 0) {
    pcVar8 = (char *)0x0;
  }
  else if (*puVar9 == 0) {
    uVar4 = puVar9[1];
    if (((byte)uVar4 & 0xfd) == 1) {
      pbVar17 = (byte *)((long)puVar9 + 5);
      pbVar10 = pbVar17;
      do {
        local_48 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = local_48;
      } while (bVar2 != 0);
      uVar6 = FUN_0404eb34(&local_48,pbVar1);
      uVar12 = 0;
      uVar13 = 0;
      *(undefined4 *)(param_3 + 5) = uVar6;
      pbVar10 = local_48;
      pbVar14 = local_48;
      do {
        pbVar11 = pbVar10;
        if (pbVar14 == pbVar1) {
          fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar15 = pbVar14 + 1;
        bVar2 = *pbVar14;
        pbVar10 = pbVar11 + 1;
        uVar3 = uVar12 & 0x3f;
        uVar12 = uVar12 + 7;
        uVar13 = ((ulong)bVar2 & 0x7f) << uVar3 | uVar13;
        pbVar14 = pbVar15;
      } while ((char)bVar2 < '\0');
      uVar16 = (uint)(-1L << (uVar12 & 0x3f));
      if (0x38 < (int)uVar12 - 7U || bVar2 < 0x40) {
        uVar16 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar13 | uVar16;
      if ((byte)uVar4 == 1) {
        local_48 = pbVar11 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar15;
        bVar2 = *pbVar17;
      }
      else {
        local_48 = pbVar10;
        uVar5 = FUN_0404eb34(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar5;
        bVar2 = *pbVar17;
      }
      if (bVar2 == 0x7a) {
        FUN_0404eb34(&local_48,pbVar1);
LAB_0404cad0:
        bVar2 = *pbVar17;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0404cb70;
              goto LAB_0404cbb4;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0404cad0;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0404cb70;
          }
          if (bVar2 == 0x4c) {
            pbVar17 = pbVar17 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0404cad0;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar7 = FUN_0404e7a8(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar7;
            pbVar17 = pbVar17 + 1;
            goto LAB_0404cad0;
          }
          if (bVar2 == 0x52) {
            pbVar17 = pbVar17 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0404cad0;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0404cad0;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_0404cad0;
          }
        }
LAB_0404cb70:
        pbVar17 = pbVar17 + 1;
        goto LAB_0404cad0;
      }
LAB_0404cbb4:
      pcVar8 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar8 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar8 = "CIE ID is not zero";
  }
  return pcVar8;
}

