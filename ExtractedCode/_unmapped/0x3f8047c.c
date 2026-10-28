// rea decompile_all
// name: FUN_03f8047c
// address: 0x3f8047c
// body: available
// range: 0x3f8047c-0x3f805df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03f8047c(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,DAT_09534880 + 0xe8);
  lVar2 = FUN_03f8f488();
  lVar5 = DAT_09534880;
  if (lVar2 == 0) {
LAB_03f804f0:
    do {
      uVar3 = FUN_0404c080(0,DAT_09534880);
      DataMemoryBarrier(2,3);
      if ((short)uVar3 <= (short)(uVar3 >> 0x20)) goto LAB_03f805c0;
      uVar4 = FUN_0404be00(uVar3,uVar3 & 0xffff00000000ffff | uVar3 + 0x100000000 & 0xffff00000000 |
                                 (ulong)((int)uVar3 + 0x10000) & 0xffff0000,DAT_09534880);
      DataMemoryBarrier(2,3);
    } while (uVar4 != uVar3);
    lVar5 = FUN_03faf950(&LAB_03f805f4,0,1,0);
    if (lVar5 != 0) {
      uVar6 = 1;
      *(int *)(DAT_09534880 + 0xe4) = *(int *)(DAT_09534880 + 0xe4) + 1;
      goto LAB_03f805c4;
    }
    do {
      uVar3 = FUN_0404c080(0,DAT_09534880);
      DataMemoryBarrier(2,3);
      uVar4 = FUN_0404be00(uVar3,uVar3 & 0xffff00000000ffff |
                                 uVar3 + 0xffff00000000 & 0xffff00000000 |
                                 (ulong)((int)uVar3 - 0x10000) & 0xffff0000,DAT_09534880);
      DataMemoryBarrier(2,3);
    } while (uVar4 != uVar3);
  }
  else {
    iVar1 = (int)(SUB168(SEXT816(lVar2) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
            ((int)(lVar2 / -0x6769800000000000) + (int)(lVar2 >> 0x3f));
    if (*(int *)(DAT_09534880 + 0xe0) != iVar1) {
      *(int *)(DAT_09534880 + 0xe0) = iVar1;
      *(undefined4 *)(lVar5 + 0xe4) = 0;
      goto LAB_03f804f0;
    }
    if (*(int *)(DAT_09534880 + 0xe4) != 10) goto LAB_03f804f0;
  }
LAB_03f805c0:
  uVar6 = 0;
LAB_03f805c4:
  FUN_03f5d920(auStack_28);
  return uVar6;
}

