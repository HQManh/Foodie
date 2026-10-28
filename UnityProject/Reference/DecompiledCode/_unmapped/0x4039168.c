// rea decompile_all
// name: FUN_04039168
// address: 0x4039168
// body: available
// range: 0x4039168-0x40391cf inclusive
// range: 0x4039214-0x4039317 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04039168(long *param_1)

{
  short *psVar1;
  short *psVar2;
  byte *pbVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  undefined8 uVar10;
  short *psVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  byte *local_38;
  
  psVar1 = (short *)*param_1;
  psVar2 = (short *)param_1[1];
  if (psVar1 == psVar2) {
    return (undefined8 *)0x0;
  }
  if ((char)*psVar1 != 'L') {
    return (undefined8 *)0x0;
  }
  psVar11 = (short *)((long)psVar1 + 1);
  uVar7 = (long)psVar2 - (long)psVar11;
  *param_1 = (long)psVar11;
  if (psVar2 == psVar11) {
code_r0x04039238:
    lVar5 = FUN_040324c0();
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    local_38 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    pbVar14 = local_38;
    if ((local_38 != pbVar3) && (*local_38 == 0x6e)) {
      pbVar14 = local_38 + 1;
      *param_1 = (long)pbVar14;
    }
    if (pbVar3 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar14 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    do {
      pbVar13 = pbVar14;
      if (*pbVar14 - 0x3a < 0xfffffff6) break;
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      pbVar13 = pbVar3;
    } while (pbVar14 != pbVar3);
    if (pbVar13 == local_38) {
      return (undefined8 *)0x0;
    }
    if (pbVar13 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar13 == 0x45) {
      *param_1 = (long)(pbVar13 + 1);
      puVar6 = (undefined8 *)FUN_0403e0f0(param_1,&stack0xffffffffffffffd8,&local_38);
      return puVar6;
    }
    return (undefined8 *)0x0;
  }
  switch(*(char *)psVar11) {
  case 'A':
    local_38 = (byte *)FUN_040324c0();
    if (local_38 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar9 = (char *)*param_1;
    if (pcVar9 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar9 != 'E') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar9 + 1);
    puVar6 = (undefined8 *)func_0x0403d7ac(param_1,&local_38);
    return puVar6;
  default:
    goto code_r0x04039238;
  case 'D':
    if (uVar7 < 2) {
      return (undefined8 *)0x0;
    }
    if (*psVar11 != 0x6e44) {
      return (undefined8 *)0x0;
    }
    psVar11 = (short *)((long)psVar1 + 3);
    *param_1 = (long)psVar11;
    if (psVar11 == psVar2) {
      return (undefined8 *)0x0;
    }
    if (*(char *)psVar11 == '0') {
      psVar11 = psVar1 + 2;
      *param_1 = (long)psVar11;
    }
    if (psVar11 != psVar2) {
      if ((char)*psVar11 != 'E') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)((long)psVar11 + 1);
      pvVar16 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar16 + 8);
      puVar6 = pvVar16;
      if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar6 = pvVar16;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
      sVar8 = strlen("nullptr");
      puVar12 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar12 = &UNK_08fae288;
      *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 8;
      *(undefined **)((long)puVar6 + lVar5 + 0x20) = &UNK_01a7b580;
      *(size_t *)((long)puVar6 + lVar5 + 0x28) = sVar8;
      *(ushort *)((long)puVar6 + lVar5 + 0x19) =
           *(ushort *)((long)puVar6 + lVar5 + 0x19) & 0xf000 | 0x540;
      return puVar12;
    }
    return (undefined8 *)0x0;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if (uVar7 < 2) {
      return (undefined8 *)0x0;
    }
    if ((char)psVar1[1] != 'l') {
      return (undefined8 *)0x0;
    }
    local_38 = (byte *)FUN_0403d8f4(param_1,0);
    if (local_38 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar9 = (char *)*param_1;
    if (pcVar9 != (char *)param_1[1]) {
      if (*pcVar9 == 'E') {
        *param_1 = (long)(pcVar9 + 1);
        puVar6 = (undefined8 *)func_0x0403e050(param_1,&local_38);
        return puVar6;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case '_':
    if (uVar7 < 2) {
      return (undefined8 *)0x0;
    }
    if (*psVar11 != 0x5a5f) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)((long)psVar1 + 3);
    puVar6 = (undefined8 *)FUN_040318a8();
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar9 = (char *)*param_1;
    if (pcVar9 != (char *)param_1[1]) {
      if (*pcVar9 == 'E') {
        *param_1 = (long)(pcVar9 + 1);
        return puVar6;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'a':
    pcVar9 = "signed char";
    uVar10 = 0xb;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'b':
    if ((uVar7 < 3) || (*psVar11 != 0x3062 || *(char *)((long)psVar1 + 3) != 'E')) {
      uVar7 = FUN_04031820(param_1,&UNK_01a5a286,3);
      if ((uVar7 & 1) == 0) {
        return (undefined8 *)0x0;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      *param_1 = (long)(psVar1 + 2);
    }
    pvVar16 = (void *)param_1[0x266];
    lVar5 = *(long *)((long)pvVar16 + 8);
    puVar6 = pvVar16;
    if (lVar5 - 0xfe0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar6 = pvVar16;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar5 + 0x10;
    puVar6 = (undefined8 *)(lVar5 + 0x10 + (long)puVar6);
    *(undefined1 *)(puVar6 + 1) = 0x49;
    *puVar6 = &UNK_08faed68;
    *(ushort *)((long)puVar6 + 9) = *(ushort *)((long)puVar6 + 9) & 0xf000 | 0x540;
    *(undefined1 *)((long)puVar6 + 0xb) = uVar4;
    return puVar6;
  case 'c':
    pcVar9 = "char";
    uVar10 = 4;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'd':
    *param_1 = (long)(psVar1 + 1);
    if ((ulong)((long)psVar2 - (long)(psVar1 + 1)) < 0x11) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 1) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 2) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 4) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 6) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 8) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    psVar11 = psVar1 + 9;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar2) {
      return (undefined8 *)0x0;
    }
    if ((char)*psVar11 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar16 = (void *)param_1[0x266];
    *param_1 = (long)((long)psVar1 + 0x13);
    lVar5 = *(long *)((long)pvVar16 + 8);
    puVar6 = pvVar16;
    if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
code_r0x0403a04c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar6 = pvVar16;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
    puVar12 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
    *puVar12 = &UNK_08faee48;
    *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0x4f;
    *(ushort *)((long)puVar6 + lVar5 + 0x19) =
         *(ushort *)((long)puVar6 + lVar5 + 0x19) & 0xf000 | 0x540;
    uVar10 = 0x10;
    goto code_r0x04039520;
  case 'e':
    *param_1 = (long)(psVar1 + 1);
    if ((ulong)((long)psVar2 - (long)(psVar1 + 1)) < 0x21) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 1) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 2) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 3) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 4) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 5) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 5) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 6) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 6) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 7) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 7) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 8) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 8) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x11) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x11) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 9) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 9) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x13) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x13) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 10) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x15) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x15) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0xb) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0xb) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x17) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x17) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0xc) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0xc) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x19) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x19) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0xd) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0xd) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x1b) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x1b) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0xe) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0xe) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x1d) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x1d) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0xf) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0xf) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x1f) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x1f) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)(psVar1 + 0x10) - 0x3a < 0xfffffff6) &&
       ((*(byte *)(psVar1 + 0x10) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    if ((*(byte *)((long)psVar1 + 0x21) - 0x3a < 0xfffffff6) &&
       ((*(byte *)((long)psVar1 + 0x21) & 0xffffffdf) - 0x47 < 0xfffffffa)) {
      return (undefined8 *)0x0;
    }
    psVar11 = psVar1 + 0x11;
    *param_1 = (long)psVar11;
    if (psVar11 == psVar2) {
      return (undefined8 *)0x0;
    }
    if ((char)*psVar11 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar16 = (void *)param_1[0x266];
    *param_1 = (long)((long)psVar1 + 0x23);
    lVar5 = *(long *)((long)pvVar16 + 8);
    puVar6 = pvVar16;
    if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto code_r0x0403a04c;
      lVar5 = 0;
      *puVar6 = pvVar16;
      puVar6[1] = 0;
      param_1[0x266] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
    puVar12 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
    *puVar12 = &UNK_08faeeb8;
    *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0x50;
    *(ushort *)((long)puVar6 + lVar5 + 0x19) =
         *(ushort *)((long)puVar6 + lVar5 + 0x19) & 0xf000 | 0x540;
    uVar10 = 0x20;
code_r0x04039520:
    puVar12[2] = psVar1 + 1;
    puVar12[3] = uVar10;
    return puVar12;
  case 'f':
    *param_1 = (long)(psVar1 + 1);
    if ((((((8 < (ulong)((long)psVar2 - (long)(psVar1 + 1))) &&
           ((0xfffffff5 < *(byte *)(psVar1 + 1) - 0x3a ||
            (0xfffffff9 < (*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(byte *)((long)psVar1 + 3) - 0x3a ||
           (0xfffffff9 < (*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47)))) &&
         ((((0xfffffff5 < *(byte *)(psVar1 + 2) - 0x3a ||
            (0xfffffff9 < (*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(byte *)((long)psVar1 + 5) - 0x3a ||
            (0xfffffff9 < (*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(byte *)(psVar1 + 3) - 0x3a ||
           (0xfffffff9 < (*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47)))))) &&
        ((0xfffffff5 < *(byte *)((long)psVar1 + 7) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47)))) &&
       (((0xfffffff5 < *(byte *)(psVar1 + 4) - 0x3a ||
         (0xfffffff9 < (*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(byte *)((long)psVar1 + 9) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47)))))) {
      psVar11 = psVar1 + 5;
      *param_1 = (long)psVar11;
      if ((psVar11 != psVar2) && ((char)*psVar11 == 'E')) {
        pvVar16 = (void *)param_1[0x266];
        *param_1 = (long)((long)psVar1 + 0xb);
        lVar5 = *(long *)((long)pvVar16 + 8);
        puVar6 = pvVar16;
        if (lVar5 - 0xfd0U < 0xfffffffffffff010) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto code_r0x0403a04c;
          lVar5 = 0;
          *puVar6 = pvVar16;
          puVar6[1] = 0;
          param_1[0x266] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
        puVar12 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
        *puVar12 = &UNK_08faedd8;
        *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0x4e;
        *(ushort *)((long)puVar6 + lVar5 + 0x19) =
             *(ushort *)((long)puVar6 + lVar5 + 0x19) & 0xf000 | 0x540;
        uVar10 = 8;
        goto code_r0x04039520;
      }
    }
    return (undefined8 *)0x0;
  case 'h':
    pcVar9 = "unsigned char";
    uVar10 = 0xd;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'i':
    pcVar9 = "";
    uVar10 = 0;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'j':
    pcVar9 = "u";
    goto code_r0x040397f0;
  case 'l':
    pcVar9 = "l";
code_r0x040397f0:
    uVar10 = 1;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'm':
    pcVar9 = "ul";
    goto code_r0x0403981c;
  case 'n':
    pcVar9 = "__int128";
    uVar10 = 8;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'o':
    pcVar9 = "unsigned __int128";
    uVar10 = 0x11;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 's':
    pcVar9 = "short";
    uVar10 = 5;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 't':
    pcVar9 = "unsigned short";
    uVar10 = 0xe;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'w':
    pcVar9 = "wchar_t";
    uVar10 = 7;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'x':
    pcVar9 = "ll";
code_r0x0403981c:
    uVar10 = 2;
    *param_1 = (long)(psVar1 + 1);
    break;
  case 'y':
    pcVar9 = "ull";
    uVar10 = 3;
    *param_1 = (long)(psVar1 + 1);
  }
  pbVar3 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar14 = pbVar3;
  if ((pbVar3 != pbVar13) && (*pbVar3 == 0x6e)) {
    pbVar14 = pbVar3 + 1;
    *param_1 = (long)pbVar14;
  }
  if ((pbVar13 != pbVar14) && (0xfffffff5 < *pbVar14 - 0x3a)) {
    do {
      pbVar15 = pbVar14;
      if (*pbVar14 - 0x3a < 0xfffffff6) break;
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      pbVar15 = pbVar13;
    } while (pbVar14 != pbVar13);
    if ((long)pbVar15 - (long)pbVar3 == 0) {
      return (undefined8 *)0x0;
    }
    if (pbVar15 == pbVar13) {
      return (undefined8 *)0x0;
    }
    if (*pbVar15 == 0x45) {
      pvVar16 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar15 + 1);
      lVar5 = *(long *)((long)pvVar16 + 8);
      puVar6 = pvVar16;
      if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar6 = pvVar16;
        puVar6[1] = 0;
        param_1[0x266] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar5 + 0x30;
      puVar12 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
      *puVar12 = &UNK_08faecf8;
      *(undefined1 *)((long)puVar6 + lVar5 + 0x18) = 0x4d;
      *(char **)((long)puVar6 + lVar5 + 0x20) = pcVar9;
      *(undefined8 *)((long)puVar6 + lVar5 + 0x28) = uVar10;
      *(byte **)((long)puVar6 + lVar5 + 0x30) = pbVar3;
      *(long *)((long)puVar6 + lVar5 + 0x38) = (long)pbVar15 - (long)pbVar3;
      *(ushort *)((long)puVar6 + lVar5 + 0x19) =
           *(ushort *)((long)puVar6 + lVar5 + 0x19) & 0xf000 | 0x540;
      return puVar12;
    }
  }
  return (undefined8 *)0x0;
}

