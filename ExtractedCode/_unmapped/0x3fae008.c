// rea decompile_all
// name: FUN_03fae008
// address: 0x3fae008
// body: available
// range: 0x3fae008-0x3fae21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fae008(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  pthread_t pVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  
  pVar5 = pthread_self();
  do {
    while( true ) {
      while (lVar9 = *(long *)(param_1 + 8), lVar9 == 0) {
        plVar7 = (long *)FUN_03fae268(DAT_09535260);
        FUN_0404bf00(pVar5,plVar7 + 1);
        lVar6 = FUN_0404be00(0,plVar7,param_1 + 8);
        lVar9 = DAT_09535260;
        DataMemoryBarrier(2,3);
        if (lVar6 == 0) {
          return 1;
        }
        plVar7[1] = -1;
        plVar1 = (long *)(lVar9 + 0x40);
        do {
          *plVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = (long)plVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(pthread_t *)(lVar9 + 8) == pVar5) {
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        return 1;
      }
      lVar6 = FUN_0404be00(0,pVar5);
      if (lVar6 != 0) break;
      if (*(long *)(param_1 + 8) == lVar9) {
        return 1;
      }
      FUN_0404bf00(0,lVar9 + 8);
    }
    if (param_2 == 0) {
      return 0;
    }
    FUN_0404bfc0(1,lVar9 + 0x20);
    pvVar8 = pthread_getspecific(*DAT_095352e0);
    FUN_03faf464(pvVar8,0x20);
    if (*(long *)(param_1 + 8) == lVar9) {
      while (*(long *)(param_1 + 8) == lVar9) {
        lVar6 = FUN_0404be00(0,pVar5,lVar9 + 8);
        if (lVar6 == 0) {
          FUN_0404bfc0(0xffffffff,lVar9 + 0x20);
          pvVar8 = pthread_getspecific(*DAT_095352e0);
          FUN_03faf5e0(pvVar8,0x20);
          return 1;
        }
        if (param_2 == -1) {
          iVar4 = FUN_03f85dd4(lVar9 + 0x18,1);
        }
        else {
          iVar4 = FUN_03f85ddc(lVar9 + 0x18,param_2,1);
        }
        if (iVar4 == -2) {
          iVar4 = FUN_0404bfc0(0xffffffff,lVar9 + 0x20);
          pvVar8 = pthread_getspecific(*DAT_095352e0);
          FUN_03faf5e0(pvVar8,0x20);
          if (((iVar4 == 1) && (*(long *)(param_1 + 8) == lVar9)) &&
             (lVar6 = FUN_0404be00(0,pVar5,lVar9 + 8), lVar6 == 0)) {
            return 1;
          }
          if (*(long *)(param_1 + 8) == lVar9) {
            return 0;
          }
          FUN_03f85c58(lVar9 + 0x28);
          return 0;
        }
      }
    }
    FUN_03fae2c4(lVar9);
  } while( true );
}

