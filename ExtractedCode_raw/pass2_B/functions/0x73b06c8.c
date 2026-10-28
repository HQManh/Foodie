// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_uncompress_32
// address: 0x73b06c8
// body: available
// range: 0x73b06c8-0x73b08fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b08f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b08f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * MessagePack_LZ4_LZ4Codec__LZ4_uncompress_32(ushort *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  if ((DAT_09520bce & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bce = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = **(long **)(DAT_09187588 + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  puVar1 = (undefined4 *)((long)param_2 + (long)param_3);
  puVar7 = puVar1 + -2;
  puVar14 = param_1;
  puVar11 = param_2;
  while( true ) {
    puVar13 = (ushort *)((long)puVar14 + 1);
    uVar4 = *puVar14;
    uVar10 = (uint)(byte)((byte)uVar4 >> 4);
    puVar14 = puVar13;
    if (uVar10 == 0xf) {
      iVar8 = -0xf0;
      do {
        puVar14 = (ushort *)((long)puVar13 + 1);
        uVar5 = *puVar13;
        iVar8 = iVar8 + 0xff;
        puVar13 = puVar14;
      } while ((byte)uVar5 == 0xff);
      uVar10 = (uint)(byte)uVar5 + iVar8;
    }
    puVar9 = (undefined4 *)((long)puVar11 + (long)(int)uVar10);
    if (puVar7 < puVar9) break;
    do {
      *puVar11 = *(undefined4 *)puVar14;
      puVar13 = puVar14 + 2;
      puVar14 = puVar14 + 4;
      puVar11[1] = *(undefined4 *)puVar13;
      puVar11 = puVar11 + 2;
    } while (puVar11 <= puVar9 && (long)puVar9 - (long)puVar11 != 0);
    puVar13 = (ushort *)(((long)puVar9 - (long)puVar11) + (long)puVar14);
    puVar14 = puVar13 + 1;
    uVar5 = *puVar13;
    puVar11 = (undefined4 *)((long)puVar9 - (ulong)uVar5);
    if (puVar11 < param_2) goto LAB_073b08e0;
    uVar10 = (byte)uVar4 & 0xf;
    if (uVar10 == 0xf) {
      iVar8 = 0xf;
      bVar3 = (byte)*puVar14;
      while (bVar3 == 0xff) {
        puVar14 = (ushort *)((long)puVar14 + 1);
        iVar8 = iVar8 + 0xff;
        bVar3 = *(byte *)puVar14;
      }
      puVar14 = (ushort *)((long)puVar14 + 1);
      uVar10 = iVar8 + (uint)bVar3;
    }
    if (uVar5 < 4) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar11;
      *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((long)puVar11 + 1);
      *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((long)puVar11 + 2);
      *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((long)puVar11 + 3);
      puVar12 = (undefined4 *)
                ((long)puVar11 + (4 - (long)*(int *)(lVar6 + 0x20 + (ulong)uVar5 * 4)));
      puVar9[1] = *puVar12;
    }
    else {
      puVar12 = puVar11 + 1;
      *puVar9 = *puVar11;
    }
    puVar9 = puVar9 + 1;
    puVar11 = (undefined4 *)((long)puVar9 + (long)(int)uVar10);
    if (puVar7 < puVar11) {
      if ((undefined4 *)((long)puVar1 - 5U) < puVar11) goto LAB_073b08e0;
      do {
        *puVar9 = *puVar12;
        puVar2 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        puVar9[1] = *puVar2;
        puVar9 = puVar9 + 2;
      } while (puVar9 < puVar7);
      if (puVar9 < puVar11) {
        do {
          puVar2 = (undefined4 *)((long)puVar9 + 1);
          *(undefined1 *)puVar9 = *(undefined1 *)puVar12;
          puVar9 = puVar2;
          puVar12 = (undefined4 *)((long)puVar12 + 1);
        } while (puVar11 != puVar2);
      }
    }
    else {
      do {
        *puVar9 = *puVar12;
        puVar2 = puVar12 + 1;
        puVar12 = puVar12 + 2;
        puVar9[1] = *puVar2;
        puVar9 = puVar9 + 2;
      } while (puVar9 < puVar11);
    }
  }
  if (puVar9 == puVar1) {
    if (*(int *)(DAT_09187588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_LZ4_LZ4Codec__BlockCopy32(puVar14,puVar11,uVar10);
    return (byte *)(((long)(int)uVar10 - (long)param_1) + (long)puVar14);
  }
LAB_073b08e0:
  return (byte *)((long)param_1 - (long)puVar14);
}

