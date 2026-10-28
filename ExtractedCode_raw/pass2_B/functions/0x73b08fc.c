// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_uncompress_64
// address: 0x73b08fc
// body: available
// range: 0x73b08fc-0x73b0b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b0b28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b0b2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * MessagePack_LZ4_LZ4Codec__LZ4_uncompress_64(ushort *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  
  if ((DAT_09520bd2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bd2 = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = **(long **)(DAT_09187588 + 0xb8);
  if (lVar5 == 0) {
LAB_073b0b28:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    lVar6 = (*(long **)(DAT_09187588 + 0xb8))[1];
    if (lVar6 == 0) goto LAB_073b0b28;
    if (*(int *)(lVar6 + 0x18) != 0) {
      puVar1 = (undefined8 *)((long)param_2 + (long)param_3);
      puVar16 = param_1;
      puVar9 = param_2;
      while( true ) {
        puVar15 = (ushort *)((long)puVar16 + 1);
        uVar3 = *puVar16;
        uVar8 = (uint)(byte)((byte)uVar3 >> 4);
        puVar16 = puVar15;
        if (uVar8 == 0xf) {
          iVar7 = -0xf0;
          do {
            puVar16 = (ushort *)((long)puVar15 + 1);
            uVar4 = *puVar15;
            iVar7 = iVar7 + 0xff;
            puVar15 = puVar16;
          } while ((byte)uVar4 == 0xff);
          uVar8 = (uint)(byte)uVar4 + iVar7;
        }
        puVar12 = (undefined8 *)((long)puVar9 + (long)(int)uVar8);
        if (puVar1 + -1 < puVar12) break;
        do {
          puVar15 = puVar16 + 4;
          puVar11 = puVar9 + 1;
          *puVar9 = *(undefined8 *)puVar16;
          puVar16 = puVar15;
          puVar9 = puVar11;
        } while (puVar11 <= puVar12 && (long)puVar12 - (long)puVar11 != 0);
        puVar15 = (ushort *)(((long)puVar12 - (long)puVar11) + (long)puVar15);
        puVar16 = puVar15 + 1;
        uVar4 = *puVar15;
        uVar14 = (ulong)uVar4;
        puVar9 = (undefined8 *)((long)puVar12 - uVar14);
        if (puVar9 < param_2) goto LAB_073b0b14;
        uVar8 = (byte)uVar3 & 0xf;
        if (uVar8 == 0xf) {
          iVar7 = 0xf;
          bVar2 = (byte)*puVar16;
          while (bVar2 == 0xff) {
            puVar16 = (ushort *)((long)puVar16 + 1);
            iVar7 = iVar7 + 0xff;
            bVar2 = *(byte *)puVar16;
          }
          puVar16 = (ushort *)((long)puVar16 + 1);
          uVar8 = iVar7 + (uint)bVar2;
        }
        if (uVar4 < 8) {
          iVar7 = *(int *)(lVar6 + 0x20 + uVar14 * 4);
          *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
          *(undefined1 *)((long)puVar12 + 1) = *(undefined1 *)((long)puVar9 + 1);
          *(undefined1 *)((long)puVar12 + 2) = *(undefined1 *)((long)puVar9 + 2);
          *(undefined1 *)((long)puVar12 + 3) = *(undefined1 *)((long)puVar9 + 3);
          puVar10 = (undefined4 *)((long)puVar9 + (4 - (long)*(int *)(lVar5 + 0x20 + uVar14 * 4)));
          puVar11 = (undefined8 *)((long)puVar10 - (long)iVar7);
          *(undefined4 *)((long)puVar12 + 4) = *puVar10;
        }
        else {
          puVar11 = puVar9 + 1;
          *puVar12 = *puVar9;
        }
        puVar9 = (undefined8 *)((long)puVar12 + (long)(int)uVar8 + 4);
        puVar12 = puVar12 + 1;
        if ((undefined8 *)((long)puVar1 - 0xcU) < puVar9) {
          if ((undefined8 *)((long)puVar1 - 5U) < puVar9) goto LAB_073b0b14;
          for (; puVar12 < puVar1 + -1; puVar12 = puVar12 + 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
          }
          for (; puVar12 < puVar9; puVar12 = (undefined8 *)((long)puVar12 + 1)) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          }
        }
        else {
          do {
            puVar13 = puVar12 + 1;
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar13;
          } while (puVar13 < puVar9);
        }
      }
      if (puVar12 == puVar1) {
        if (*(int *)(DAT_09187588 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_LZ4_LZ4Codec__BlockCopy64(puVar16,puVar9,uVar8);
        return (byte *)(((long)(int)uVar8 - (long)param_1) + (long)puVar16);
      }
LAB_073b0b14:
      return (byte *)((long)param_1 - (long)puVar16);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

