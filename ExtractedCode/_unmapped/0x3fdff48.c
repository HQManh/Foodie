// rea decompile_all
// name: FUN_03fdff48
// address: 0x3fdff48
// body: available
// range: 0x3fdff48-0x3fe017f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fdff48(long *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  bVar3 = false;
  if (param_1 != (long *)0x0) {
    if ((((param_3 == 1) && ((int)param_1[5] != 0)) && (*param_1 != 0)) &&
       (lVar7 = param_1[1], lVar7 != 0)) {
      lVar2 = param_1[2];
      FUN_03fdfe8c(param_2,&DAT_01a56dbe);
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,&DAT_01a5d28f);
      FUN_03fdfe8c(param_2,&DAT_01a6d9b8,(int)lVar2);
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,&DAT_01a56fd9);
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,lVar7);
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,&DAT_01a8101f);
    }
    FUN_03fdfaa8(param_2,param_1 + 5);
    if (*(char *)((long)param_1 + 0x2d) == '\x02') {
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,&DAT_01a367cc);
      if (((DAT_09749bc8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_09749bc8), iVar5 != 0)) {
        DAT_09749b80 = 1;
        DAT_09749b88 = 0;
        __cxa_guard_release(&DAT_09749bc8);
      }
      lVar7 = param_1[4];
      uVar6 = 0;
      do {
        iVar5 = (int)uVar6;
        uVar6 = FUN_0404bd00(uVar6,iVar5 + 1,&DAT_09749b88);
        iVar4 = (int)uVar6;
        if (iVar4 == iVar5) break;
      } while (iVar4 != 2);
      while (iVar4 != 0) {
        FUN_03fe02a8(&DAT_09749b88,2,0xffffffff);
        iVar4 = FUN_0404be70(2,&DAT_09749b88);
      }
      pcVar1 = &DAT_09749380;
      if (DAT_09749b80 != lVar7) {
        pcVar1 = "<lost extra info>";
      }
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,pcVar1);
      iVar5 = FUN_0404bea0(0,&DAT_09749b88);
      if (iVar5 == 2) {
        FUN_03fe0300(&DAT_09749b88,1,0);
      }
    }
    else if (*(char *)((long)param_1 + 0x2d) == '\x01') {
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,&DAT_01a367cc);
      FUN_03fdfe8c(param_2,&DAT_01a56dbe,param_1[4]);
    }
    if ((int)param_1[5] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + 0x2c) != '\0';
    }
  }
  return bVar3;
}

