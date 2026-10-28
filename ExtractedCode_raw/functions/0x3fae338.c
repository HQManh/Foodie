// rea decompile_all
// name: FUN_03fae338
// address: 0x3fae338
// body: available
// range: 0x3fae338-0x3fae437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fae398 to 0x3f86a58 FUN_03f86a58 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fae338(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)FUN_03fae438();
  iVar4 = *(int *)((long)plVar6 + 0x14) + -1;
  if (iVar4 < 1) {
    if ((int)plVar6[4] != 0) {
      FUN_0404bf00(0,plVar6 + 1);
LAB_03fae384:
      FUN_03f86a58(plVar6 + 3,1,0);
      return;
    }
    if (plVar6[6] == 0) {
      FUN_0404bf00(0,param_1 + 8);
      DataMemoryBarrier(2,3);
      FUN_03f85d3c(plVar6 + 5);
      iVar4 = (int)plVar6[4];
      lVar5 = DAT_09535260;
      while (DAT_09535260 = lVar5, iVar4 != 0) {
        FUN_03f86a58(plVar6 + 3,(int)plVar6[4],0);
        FUN_03f85ddc(plVar6 + 5,1,0);
        lVar5 = DAT_09535260;
        iVar4 = (int)plVar6[4];
      }
      plVar6[1] = -1;
      plVar1 = (long *)(lVar5 + 0x40);
      do {
        *plVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = (long)plVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_0404bf00(0,plVar6 + 1);
      if ((int)plVar6[4] != 0) goto LAB_03fae384;
    }
  }
  else {
    *(int *)((long)plVar6 + 0x14) = iVar4;
  }
  return;
}

