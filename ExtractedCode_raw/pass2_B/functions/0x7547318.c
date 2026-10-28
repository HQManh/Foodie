// rea decompile_all
// name: thunk_FUN_03f62e14
// address: 0x7547318
// body: available
// range: 0x7547318-0x754731b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f62e14(void)

{
  byte bVar1;
  ulong uVar2;
  void *pvVar3;
  byte *pbVar4;
  byte bVar5;
  char *__s;
  char *pcVar6;
  size_t sVar7;
  char *__dest;
  char *pcVar8;
  undefined8 uVar9;
  ulong uStack_50;
  ulong uStack_48;
  byte *pbStack_40;
  byte abStack_38 [8];
  ulong uStack_30;
  void *pvStack_28;
  
  FUN_03f89a60(abStack_38);
  uVar2 = (ulong)(abStack_38[0] >> 1);
  if ((abStack_38[0] & 1) != 0) {
    uVar2 = uStack_30;
  }
  if (uVar2 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
    pbStack_40 = (byte *)0x0;
    goto LAB_03f62f74;
  }
  pvVar3 = (void *)((ulong)abStack_38 | 1);
  if ((abStack_38[0] & 1) != 0) {
    pvVar3 = pvStack_28;
  }
  __s = (char *)FUN_03f92a28(pvVar3);
  pcVar6 = strchr(__s,0x2e);
  if (pcVar6 == (char *)0x0) {
    __dest = (char *)0x0;
  }
  else {
    sVar7 = strlen(__s);
    __dest = malloc(sVar7);
    pcVar8 = strncpy(__dest,__s,(long)pcVar6 - (long)__s);
    pcVar8[(long)pcVar6 - (long)__s] = '\0';
    pcVar6 = strchr(pcVar8,0x40);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
  }
  pcVar6 = strrchr(__s,0x40);
  if ((__dest == (char *)0x0) && (pcVar6 != (char *)0x0)) {
    sVar7 = strlen(__s);
    __dest = malloc(sVar7);
    pcVar8 = strncpy(__dest,__s,(long)pcVar6 - (long)__s);
    pcVar8[(long)pcVar6 - (long)__s] = '\0';
LAB_03f62ef8:
    free(__s);
    __s = __dest;
  }
  else if (__dest != (char *)0x0) goto LAB_03f62ef8;
  pcVar6 = strchr(__s,0x5f);
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '-';
  }
  FUN_03f6321c(&uStack_50,__s);
  free(__s);
  pbVar4 = (byte *)((ulong)&uStack_50 | 1);
  uVar2 = uStack_50 >> 1 & 0x7f;
  if ((uStack_50 & 1) != 0) {
    pbVar4 = pbStack_40;
    uVar2 = uStack_48;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar5 = *pbVar4;
    bVar1 = bVar5 | 0x20;
    if (0x19 < bVar5 - 0x41) {
      bVar1 = bVar5;
    }
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
  }
LAB_03f62f74:
  if ((abStack_38[0] & 1) != 0) {
    operator_delete(pvStack_28);
  }
  pbVar4 = (byte *)((ulong)&uStack_50 | 1);
  if ((uStack_50 & 1) != 0) {
    pbVar4 = pbStack_40;
  }
  uVar9 = FUN_03f967b4(pbVar4);
  if ((uStack_50 & 1) != 0) {
    operator_delete(pbStack_40);
  }
  return uVar9;
}

