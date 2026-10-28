// rea decompile_all
// name: FUN_0404a4f4
// address: 0x404a4f4
// body: available
// range: 0x404a4f4-0x404a62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404a5c0 to 0x89dbdd0 <EXTERNAL>::free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_0404a4f4(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ulong extraout_x0;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_1 < (void *)0x974b0b0) || ((void *)0x974b2af < param_1)) {
    free(param_1);
    return extraout_x0;
  }
  puVar7 = (ushort *)((long)param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)0x974b088);
  if ((puRam000000000974b080 != (ushort *)0x0) && (puRam000000000974b080 != (ushort *)0x974b2b0)) {
    puVar2 = puRam000000000974b080;
    puVar6 = (ushort *)0x0;
    do {
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar7) {
        puVar5[1] = *(short *)((long)param_1 + -2) + uVar1;
        goto LAB_0404a60c;
      }
      if (puVar7 + (ulong)*(ushort *)((long)param_1 + -2) * 2 == puVar5) {
        *(ushort *)((long)param_1 + -2) = *(ushort *)((long)param_1 + -2) + uVar1;
        if (puVar6 == (ushort *)0x0) {
          puRam000000000974b080 = puVar7;
          *puVar7 = *puVar5;
        }
        else {
          *puVar6 = (ushort)((int)puVar7 + 0xf68b4f50U >> 2);
        }
        goto LAB_0404a60c;
      }
      puVar2 = (ushort *)((ulong)*puVar5 * 4 + 0x974b0b0);
      puVar6 = puVar5;
    } while ((ulong)*puVar5 != 0x80);
  }
  iVar4 = (int)puRam000000000974b080;
  puRam000000000974b080 = puVar7;
  *puVar7 = (ushort)(iVar4 + 0xf68b4f50U >> 2);
LAB_0404a60c:
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)0x974b088);
  return (ulong)uVar3;
}

