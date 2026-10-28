// rea decompile_all
// name: FUN_03fe060c
// address: 0x3fe060c
// body: available
// range: 0x3fe060c-0x3fe084f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_03fe060c(void)

{
  double *pdVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  timespec local_60;
  
  if (((bRam0000000009749c18 & 1) == 0) && (iVar4 = __cxa_guard_acquire(0x9749c18), iVar4 != 0)) {
    dRam0000000009749bf0 = 0.0;
    cRam0000000009749bf8 = '\0';
    dRam0000000009749be8 = -INFINITY;
    dRam0000000009749be0 = -INFINITY;
    uRam0000000009749c10 = 0x4020000000000000;
    uRam0000000009749c08 = 0x3f50624dd2f1a9fc;
    dRam0000000009749c00 = 0.001;
    __cxa_guard_release(0x9749c18);
  }
  clock_gettime(1,&local_60);
  dVar7 = (double)local_60.tv_sec + (double)local_60.tv_nsec * 1e-09;
  uVar3 = clock_gettime(7,&local_60);
  dVar5 = (double)(ulong)uVar3;
  dVar9 = dRam0000000009749be0;
  do {
    dVar10 = dVar9;
    if (dVar9 != -INFINITY) break;
    dVar5 = (double)FUN_0404bdc0(dVar9,dVar7,0x9749be0);
    bVar2 = dVar5 != dVar9;
    dVar10 = dVar7;
    dVar9 = dVar5;
  } while (bVar2);
  dVar8 = (double)local_60.tv_sec + (double)local_60.tv_nsec * 1e-09;
  dVar9 = dRam0000000009749be8;
  do {
    dVar6 = dVar9;
    if (dVar9 != -INFINITY) break;
    dVar5 = (double)FUN_0404bdc0(dVar9,dVar8,0x9749be8);
    bVar2 = dVar5 != dVar9;
    dVar6 = dVar8;
    dVar9 = dVar5;
  } while (bVar2);
  dVar9 = (dVar8 - dVar6) - (dVar7 - dVar10);
  if (dVar9 < -dRam0000000009749c00) {
    cRam0000000009749bf8 = '\x01';
  }
  pdVar1 = (double *)0x9749c08;
  if (cRam0000000009749bf8 != '\0') {
    pdVar1 = (double *)0x9749c10;
  }
  dVar10 = *pdVar1;
  dVar7 = dRam0000000009749bf0;
  do {
    if (dVar9 <= dVar10 + dVar7) {
      return dVar5;
    }
    dVar5 = (double)FUN_0404bdc0(dVar7,dVar9,0x9749bf0);
    bVar2 = dVar5 != dVar7;
    dVar7 = dVar5;
  } while (bVar2);
  return dVar5;
}

