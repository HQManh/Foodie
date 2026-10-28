// rea decompile_all
// name: System.HashCode$$ToHashCode
// address: 0x75b06f8
// body: available
// range: 0x75b06f8-0x75b092b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint System_HashCode__ToHashCode(undefined1 (*param_1) [16])

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar6 [16];
  
  if ((DAT_09521cb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185018);
    DAT_09521cb2 = 1;
  }
  uVar2 = *(uint *)(param_1[1] + 0xc);
  uVar1 = uVar2 & 3;
  if (uVar2 < 4) {
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_HashCode__MixEmptyState();
  }
  else {
    auVar6 = *param_1;
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951984f == '\0') {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984f = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar5 = NEON_ushl(auVar6,_DAT_01a8e490,4);
    auVar7 = NEON_ushl(auVar6,_DAT_01a8c8f0,4);
    iVar3 = CONCAT13(auVar7[3] | auVar5[3],
                     CONCAT12(auVar7[2] | auVar5[2],
                              CONCAT11(auVar7[1] | auVar5[1],auVar7[0] | auVar5[0])));
    auVar4._0_8_ = CONCAT17(auVar7[7] | auVar5[7],
                            CONCAT16(auVar7[6] | auVar5[6],
                                     CONCAT15(auVar7[5] | auVar5[5],
                                              CONCAT14(auVar7[4] | auVar5[4],iVar3))));
    auVar4[8] = auVar7[8] | auVar5[8];
    auVar4[9] = auVar7[9] | auVar5[9];
    auVar4[10] = auVar7[10] | auVar5[10];
    auVar4[0xb] = auVar7[0xb] | auVar5[0xb];
    auVar6[0xc] = auVar7[0xc] | auVar5[0xc];
    auVar6._0_12_ = auVar4;
    auVar6[0xd] = auVar7[0xd] | auVar5[0xd];
    auVar6[0xe] = auVar7[0xe] | auVar5[0xe];
    auVar6[0xf] = auVar7[0xf] | auVar5[0xf];
    iVar3 = iVar3 + (int)((ulong)auVar4._0_8_ >> 0x20) + auVar4._8_4_ + auVar6._12_4_;
  }
  uVar2 = iVar3 + uVar2 * 4;
  if (uVar1 != 0) {
    iVar3 = *(int *)param_1[1];
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951984c == '\0') {
      FUN_03f5c2a4(&DAT_09185018);
      DAT_0951984c = '\x01';
    }
    if (*(int *)(DAT_09185018 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = uVar2 + iVar3 * -0x3d4d51c3;
    uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) * 0x27d4eb2f;
    if (uVar1 != 1) {
      iVar3 = *(int *)(param_1[1] + 4);
      if (*(int *)(DAT_09185018 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951984c == '\0') {
        FUN_03f5c2a4(&DAT_09185018);
        DAT_0951984c = '\x01';
      }
      if (*(int *)(DAT_09185018 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = uVar2 + iVar3 * -0x3d4d51c3;
      uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) * 0x27d4eb2f;
      if (uVar1 == 3) {
        iVar3 = *(int *)(param_1[1] + 8);
        if (*(int *)(DAT_09185018 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_0951984c == '\0') {
          FUN_03f5c2a4(&DAT_09185018);
          DAT_0951984c = '\x01';
        }
        if (*(int *)(DAT_09185018 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = uVar2 + iVar3 * -0x3d4d51c3;
        uVar2 = (uVar2 >> 0xf | uVar2 * 0x20000) * 0x27d4eb2f;
      }
    }
  }
  if (*(int *)(DAT_09185018 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = (uVar2 ^ uVar2 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}

