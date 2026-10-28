// rea decompile_all
// name: FUN_03f82798
// address: 0x3f82798
// body: available
// range: 0x3f82798-0x3f8287b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f82798(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = DAT_09534880;
  uVar3 = 0;
  do {
    iVar2 = (int)uVar3;
    uVar3 = FUN_0404bd00(uVar3,iVar2 + 1,lVar5 + 0xa0);
    iVar1 = (int)uVar3;
    if (iVar1 == iVar2) break;
  } while (iVar1 != 2);
  while (iVar1 != 0) {
    FUN_03fe02a8(lVar5 + 0xa0,2,0xffffffff);
    iVar1 = FUN_0404be70(2,lVar5 + 0xa0);
  }
  FUN_03f82884(*param_1);
  iVar2 = FUN_0404bea0(0,lVar5 + 0xa0);
  if (iVar2 == 2) {
    FUN_03fe0300(lVar5 + 0xa0,1,0);
  }
  do {
    lVar4 = FUN_0404c080(0,DAT_09534880);
    DataMemoryBarrier(2,3);
    param_1[3] = lVar4;
    lVar5 = DAT_09534880;
    *(short *)((long)param_1 + 0x1c) = (short)((ulong)lVar4 >> 0x20) + -1;
    *(short *)((long)param_1 + 0x1a) = (short)((ulong)lVar4 >> 0x10) + -1;
    lVar5 = FUN_0404be00(lVar4,param_1[3],lVar5);
    DataMemoryBarrier(2,3);
  } while (lVar5 != lVar4);
  return;
}

