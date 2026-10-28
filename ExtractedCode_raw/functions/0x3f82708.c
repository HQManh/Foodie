// rea decompile_all
// name: FUN_03f82708
// address: 0x3f82708
// body: available
// range: 0x3f82708-0x3f8278f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f82708(long *param_1)

{
  int iVar1;
  int iVar2;
  pthread_t pVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  pVar3 = pthread_self();
  if (pVar3 == *(pthread_t *)(lVar5 + 0x40)) {
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
  }
  else {
    uVar4 = 0;
    do {
      iVar1 = (int)uVar4;
      uVar4 = FUN_0404bd00(uVar4,iVar1 + 1,lVar5);
      iVar2 = (int)uVar4;
      if (iVar2 == iVar1) break;
    } while (iVar2 != 2);
    while (iVar2 != 0) {
      FUN_03fe02a8(lVar5,2,0xffffffff);
      iVar2 = FUN_0404be70(2,lVar5);
    }
    *(pthread_t *)(lVar5 + 0x40) = pVar3;
  }
  return;
}

