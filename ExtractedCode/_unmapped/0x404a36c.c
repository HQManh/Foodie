// rea decompile_all
// name: FUN_0404a36c
// address: 0x404a36c
// body: available
// range: 0x404a36c-0x404a4d3 inclusive
// range: 0x404a4d8-0x404a4ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404a4ec to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_0404a36c(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort *extraout_x8;
  ushort *puVar5;
  ushort *extraout_x9;
  ushort *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  
  pthread_mutex_lock((pthread_mutex_t *)0x974b088);
  if (puRam000000000974b080 == (ushort *)0x0) {
    uRam000000000974b0bc = 0x7d0080;
    puRam000000000974b080 = (ushort *)0x974b0bc;
  }
  else if (puRam000000000974b080 == (ushort *)0x974b2b0) goto LAB_0404a424;
  uVar7 = param_1 + 3U >> 2;
  uVar1 = uVar7 + 1;
  puVar6 = (ushort *)0x0;
  puVar5 = puRam000000000974b080;
  do {
    puVar10 = puVar5 + 2;
    if (((ulong)puVar10 & 0xf) != 0) {
      uVar4 = FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0x92,
                           &DAT_01a45042);
      pthread_mutex_unlock((pthread_mutex_t *)0x974b088);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar4);
    }
    uVar2 = puVar5[1];
    uVar9 = (ulong)uVar2;
    uVar8 = (ulong)((uint)uVar2 - (int)uVar1 & 3);
    if (uVar9 <= uVar1) {
      uVar8 = 0;
    }
    if (uVar8 + uVar1 < uVar9) {
      uVar3 = (ushort)(uVar8 + uVar1);
      uVar2 = uVar2 - uVar3;
      puVar6 = puVar5 + (ulong)uVar2 * 2;
      puVar5[1] = uVar2;
      puVar10 = puVar6 + 2;
      *puVar6 = 0;
      puVar6[1] = uVar3;
      if (((ulong)puVar10 & 0xf) != 0) {
        FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/fallback_malloc.cpp",0xa7,
                     &DAT_01a45042);
        puVar5 = extraout_x8;
        puVar6 = extraout_x9;
LAB_0404a46c:
        uVar2 = *puVar5;
        if (puVar6 == (ushort *)0x0) {
          *puVar5 = 0;
          puRam000000000974b080 = (ushort *)((ulong)uVar2 * 4 + 0x974b0b0);
        }
        else {
          *puVar6 = uVar2;
          *puVar5 = 0;
        }
      }
      goto LAB_0404a490;
    }
    if (uVar7 < uVar9) goto LAB_0404a46c;
    uVar2 = *puVar5;
    puVar6 = puVar5;
    puVar5 = (ushort *)((ulong)uVar2 * 4 + 0x974b0b0);
  } while ((ulong)uVar2 != 0x80);
LAB_0404a424:
  puVar10 = (ushort *)0x0;
LAB_0404a490:
  pthread_mutex_unlock((pthread_mutex_t *)0x974b088);
  return puVar10;
}

