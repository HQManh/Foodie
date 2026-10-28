// rea decompile_all
// name: FUN_03fcba24
// address: 0x3fcba24
// body: available
// range: 0x3fcba24-0x3fcbfa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcbf60 to 0x39aede4 FUN_039aede4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fcbfa0 to 0x89dbde0 <EXTERNAL>::exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcba24(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (DAT_09748120 != 0) {
    return;
  }
  FUN_03fd61cc();
  pcVar3 = getenv("GC_PRINT_VERBOSE_STATS");
  if (pcVar3 == (char *)0x0) {
    pcVar3 = getenv("GC_PRINT_STATS");
    if (pcVar3 != (char *)0x0) {
      DAT_09535be0 = 1;
    }
  }
  else {
    DAT_09535be0 = 2;
  }
  pcVar3 = getenv("GC_LOG_FILE");
  if (pcVar3 != (char *)0x0) {
    iVar1 = open(pcVar3,0x441,0x1b6);
    if (iVar1 < 0) {
      FUN_03fcb048("Failed to open %s as log file\n",pcVar3);
    }
    else {
      DAT_095158f0 = iVar1;
      pcVar3 = getenv("GC_ONLY_LOG_TO_FILE");
      if ((pcVar3 == (char *)0x0) || ((*pcVar3 == '0' && (pcVar3[1] == '\0')))) {
        DAT_095158e8 = iVar1;
        DAT_095158ec = iVar1;
      }
    }
  }
  pcVar3 = getenv("GC_DUMP_REGULARLY");
  if (pcVar3 != (char *)0x0) {
    DAT_097485d8 = 1;
  }
  pcVar3 = getenv("GC_FIND_LEAK");
  if (pcVar3 != (char *)0x0) {
    DAT_09748510 = 1;
  }
  pcVar3 = getenv("GC_FINDLEAK_DELAY_FREE");
  if (pcVar3 != (char *)0x0) {
    DAT_09748628 = 1;
  }
  pcVar3 = getenv("GC_ALL_INTERIOR_POINTERS");
  if (pcVar3 != (char *)0x0) {
    DAT_09515628 = 1;
  }
  pcVar3 = getenv("GC_DONT_GC");
  if (pcVar3 != (char *)0x0) {
    DAT_09748500 = 1;
  }
  pcVar3 = getenv("GC_PRINT_BACK_HEIGHT");
  if (pcVar3 != (char *)0x0) {
    DAT_097485dc = 1;
  }
  pcVar3 = getenv("GC_NO_BLACKLIST_WARNING");
  if (pcVar3 != (char *)0x0) {
    DAT_09515650 = 0x7fffffffffffffff;
  }
  pcVar3 = getenv("GC_TRACE");
  if (pcVar3 != (char *)0x0) {
    (*(code *)PTR_thunk_FUN_03fcb048_09515630)
              ("GC Warning: Tracing not enabled: Ignoring GC_TRACE value\n",0);
  }
  pcVar3 = getenv("GC_PAUSE_TIME_TARGET");
  if (pcVar3 != (char *)0x0) {
    lVar4 = atol(pcVar3);
    if (lVar4 < 5) {
      (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                ("GC Warning: GC_PAUSE_TIME_TARGET environment variable value too small or bad syntax: Ignoring\n"
                 ,0);
    }
    else {
      DAT_09515668 = lVar4 * 1000000;
    }
  }
  pcVar3 = getenv("GC_FULL_FREQUENCY");
  if ((pcVar3 != (char *)0x0) && (iVar1 = atoi(pcVar3), 0 < iVar1)) {
    DAT_09515658 = iVar1;
  }
  pcVar3 = getenv("GC_LARGE_ALLOC_WARN_INTERVAL");
  lVar4 = DAT_09515650;
  if ((pcVar3 != (char *)0x0) && (lVar4 = atol(pcVar3), lVar4 < 1)) {
    (*(code *)PTR_thunk_FUN_03fcb048_09515630)
              ("GC Warning: GC_LARGE_ALLOC_WARN_INTERVAL environment variable has bad value: Ignoring\n"
               ,0);
    lVar4 = DAT_09515650;
  }
  DAT_09515650 = lVar4;
  pcVar3 = getenv("GC_FREE_SPACE_DIVISOR");
  if ((pcVar3 != (char *)0x0) && (uVar2 = atoi(pcVar3), 0 < (int)uVar2)) {
    DAT_09515660 = (ulong)uVar2;
  }
  pcVar3 = getenv("GC_UNMAP_THRESHOLD");
  if (pcVar3 != (char *)0x0) {
    if ((*pcVar3 == '0') && (pcVar3[1] == '\0')) {
      iVar1 = 0;
    }
    else {
      iVar1 = atoi(pcVar3);
      if (iVar1 < 1) goto LAB_03fcbd0c;
    }
    DAT_09515648 = iVar1;
  }
LAB_03fcbd0c:
  pcVar3 = getenv("GC_FORCE_UNMAP_ON_GCOLLECT");
  if ((pcVar3 != (char *)0x0) &&
     ((*pcVar3 != '0' || (DAT_097485e0 = (uint)(byte)pcVar3[1], pcVar3[1] != 0)))) {
    DAT_097485e0 = 1;
  }
  pcVar3 = getenv("GC_USE_ENTIRE_HEAP");
  if ((pcVar3 != (char *)0x0) &&
     ((*pcVar3 != '0' || (DAT_09748124 = (uint)(byte)pcVar3[1], pcVar3[1] != 0)))) {
    DAT_09748124 = 1;
  }
  DAT_09748a28 = clock();
  FUN_03fd6208();
  if (DAT_09515628 != 0) {
    DAT_09515710 = 0xfffffffffffffff8;
  }
  FUN_03fd4c04(&DAT_09535be8,&DAT_097480c8);
  FUN_03fd4c04(&PTR_DAT_095156e0,&PTR_LAB_095158e0);
  if (DAT_09748a10 == 0) {
    DAT_09748a10 = FUN_03fd6270();
  }
  if ((DAT_097480f0 != 0) || (pcVar3 = getenv("GC_ENABLE_INCREMENTAL"), pcVar3 != (char *)0x0)) {
    if (DAT_09535be0 == 2) {
      FUN_03fcb51c("Initializing MANUAL_VDB...\n");
    }
    DAT_097480f0 = 1;
  }
  FUN_03fcc668();
  FUN_03fcb308();
  FUN_03fd3c78(0x1000);
  pcVar3 = getenv("GC_INITIAL_HEAP_SIZE");
  if (pcVar3 == (char *)0x0) {
    uVar5 = 0x40000;
  }
  else {
    uVar5 = FUN_03fd6128();
    if (uVar5 < 0x40001) {
      (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                ("GC Warning: Bad initial heap size %s - ignoring it.\n",pcVar3);
    }
  }
  pcVar3 = getenv("GC_MAXIMUM_HEAP_SIZE");
  if (pcVar3 != (char *)0x0) {
    uVar6 = FUN_03fd6128();
    if (uVar6 < uVar5) {
      (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                ("GC Warning: Bad maximum heap size %s - ignoring it.\n",pcVar3);
    }
    DAT_09748600 = uVar6;
    if (DAT_09748608 == 0) {
      DAT_09748608 = 2;
    }
  }
  iVar1 = FUN_03fd09e8(uVar5 >> 0xc);
  if (iVar1 != 0) {
    DAT_09535bf0 = DAT_09535bf0 + uVar5;
    if (DAT_09515628 == 0) {
      if (DAT_0953b0c8 == '\0') {
        DAT_0953b0c8 = '\x01';
        DAT_09535e98 = 1;
      }
    }
    else {
      memset(&DAT_0953b0c8,1,0x1000);
    }
    FUN_03fd5f54();
    DAT_09748120 = 1;
    FUN_03fd631c();
    if (DAT_097485d8 != 0) {
      FUN_03fcfcbc(0);
    }
    if ((DAT_09748a18 == 0) || (DAT_097480f0 != 0)) {
      FUN_03fcea68(&LAB_03fce6f8);
    }
    if (DAT_09748510 == 0) {
      return;
    }
    FUN_039aede4(&LAB_03fd6108);
    return;
  }
  FUN_03fcb048("Can\'t start up: not enough memory\n");
  (*(code *)PTR_FUN_09515620)(0);
                    /* WARNING: Subroutine does not return */
  exit(1);
}

