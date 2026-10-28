// rea decompile_all
// name: System.Security.Cryptography.DESTransform$$SetKey
// address: 0x7471d60
// body: available
// range: 0x7471d60-0x74720e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74720e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74720e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DESTransform__SetKey(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((DAT_095211fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09183188);
    DAT_095211fe = 1;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
    if (*(int *)(DAT_09183188 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      uVar13 = *(ulong *)(lVar4 + 0x18);
      lVar4 = FUN_03f5c394(DAT_0917fc88,uVar13 & 0xffffffff);
      lVar5 = FUN_03f5c394(DAT_0917fc88,uVar13 & 0xffffffff);
      lVar8 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x18);
      if (lVar8 != 0) {
        uVar11 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar11) {
          lVar10 = 0;
          do {
            if (uVar11 <= (uint)lVar10) {
LAB_074720e0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (param_2 == 0) goto LAB_074720e4;
            bVar2 = *(byte *)(lVar8 + 0x20 + lVar10);
            bVar3 = bVar2 >> 3;
            if (*(uint *)(param_2 + 0x18) <= (uint)bVar3) goto LAB_074720e0;
            if (lVar4 == 0) goto LAB_074720e4;
            if (*(uint *)(lVar4 + 0x18) <= (uint)lVar10) goto LAB_074720e0;
            *(byte *)(lVar4 + 0x20 + lVar10) =
                 *(byte *)(param_2 + (ulong)bVar3 + 0x20) >> (ulong)((bVar2 ^ 0xffffffff) & 7) & 1;
            lVar10 = lVar10 + 1;
            uVar11 = *(uint *)(lVar8 + 0x18);
          } while ((int)lVar10 < (int)uVar11);
        }
        iVar12 = (int)uVar13;
        uVar11 = iVar12 >> 1;
        uVar13 = 0;
        while( true ) {
          if (*(int *)(DAT_09183188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((long)(*(int *)(*(long *)(DAT_09183188 + 0xb8) + 4) << 1) <= (long)uVar13) {
            return;
          }
          if (0 < (int)uVar11) {
            uVar14 = 0;
            do {
              if (*(int *)(DAT_09183188 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar8 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x20);
              if (lVar8 == 0) goto LAB_074720e4;
              if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_074720e0;
              if (lVar4 == 0) goto LAB_074720e4;
              uVar7 = (uint)*(byte *)(lVar8 + uVar13 + 0x20);
              uVar6 = 0;
              if ((int)uVar11 <= (int)((int)uVar14 + uVar7)) {
                uVar6 = uVar11;
              }
              uVar6 = (int)uVar14 + (uVar7 - uVar6);
              if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_074720e0;
              if (lVar5 == 0) goto LAB_074720e4;
              if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_074720e0;
              *(undefined1 *)(lVar5 + 0x20 + uVar14) = *(undefined1 *)(lVar4 + (int)uVar6 + 0x20);
              uVar14 = uVar14 + 1;
            } while (uVar11 != uVar14);
          }
          if ((int)uVar11 < iVar12) {
            lVar8 = 0;
            do {
              if (*(int *)(DAT_09183188 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar10 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x20);
              if (lVar10 == 0) goto LAB_074720e4;
              if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_074720e0;
              if (lVar4 == 0) goto LAB_074720e4;
              uVar7 = uVar11 + (int)lVar8;
              uVar9 = (uint)*(byte *)(lVar10 + uVar13 + 0x20);
              uVar6 = 0;
              if (iVar12 <= (int)(uVar7 + uVar9)) {
                uVar6 = uVar11;
              }
              uVar6 = uVar7 + (uVar9 - uVar6);
              if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_074720e0;
              if (lVar5 == 0) goto LAB_074720e4;
              if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_074720e0;
              *(undefined1 *)(lVar5 + 0x20 + (long)(int)uVar11 + lVar8) =
                   *(undefined1 *)(lVar4 + (int)uVar6 + 0x20);
              lVar8 = lVar8 + 1;
            } while ((long)iVar12 - (long)(int)uVar11 != lVar8);
          }
          if (*(int *)(DAT_09183188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = *(long *)(*(long *)(DAT_09183188 + 0xb8) + 0x28);
          if (lVar8 == 0) break;
          uVar6 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar6) {
            iVar1 = *(int *)(*(long *)(DAT_09183188 + 0xb8) + 4);
            uVar7 = 0;
            do {
              if (uVar6 <= uVar7) goto LAB_074720e0;
              if (lVar5 == 0) goto LAB_074720e4;
              bVar2 = *(byte *)(lVar8 + (int)uVar7 + 0x20);
              if (*(uint *)(lVar5 + 0x18) <= (uint)bVar2) goto LAB_074720e0;
              if (*(char *)(lVar5 + (ulong)bVar2 + 0x20) != '\0') {
                lVar10 = *(long *)(param_1 + 0x58);
                if (lVar10 == 0) goto LAB_074720e4;
                uVar6 = uVar7 / 6 + iVar1 * (int)uVar13;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_074720e0;
                lVar10 = lVar10 + (int)uVar6;
                *(byte *)(lVar10 + 0x20) =
                     *(byte *)(lVar10 + 0x20) |
                     (byte)(0x20 >> (ulong)(uVar7 + (uVar7 / 6) * 2 + (uVar7 / 6) * -8 & 0x1f));
              }
              uVar6 = *(uint *)(lVar8 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)uVar6);
          }
          uVar13 = uVar13 + 1;
        }
      }
    }
  }
LAB_074720e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

