// rea decompile_all
// name: FUN_03fae518
// address: 0x3fae518
// body: available
// range: 0x3fae518-0x3fae683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fae680 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fae518(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  exception_ptr aeStack_60 [8];
  undefined4 local_58;
  void *local_50;
  long local_48;
  
  lVar7 = FUN_03fae438();
  uVar2 = *(undefined4 *)(lVar7 + 0x14);
  *(undefined4 *)(lVar7 + 0x14) = 1;
  if (param_2 == 0) {
    FUN_03fae338(param_1);
    puVar8 = (undefined8 *)0x0;
    local_48 = 0;
    bVar5 = false;
  }
  else {
    puVar8 = (undefined8 *)FUN_03fb0354(DAT_09535268);
    *(undefined4 *)(puVar8 + 3) = 1;
    do {
      lVar11 = *(long *)(lVar7 + 0x30);
      puVar8[1] = lVar11;
      lVar9 = FUN_0404be00(lVar11,puVar8);
      DataMemoryBarrier(2,3);
      if (lVar9 == lVar11) break;
    } while (lVar11 != lVar9);
    FUN_03fae338(param_1);
    local_48 = 0;
    local_58 = 0x20;
    pvVar10 = pthread_getspecific(*DAT_095352e0);
    local_50 = pvVar10;
    FUN_03faf464(pvVar10,0x20);
    iVar6 = FUN_03f85ddc(puVar8 + 2,param_2,1);
    FUN_03faf5e0(pvVar10,0x20);
    bVar5 = iVar6 != -2;
  }
  FUN_03fae008(param_1,0xffffffff);
  lVar7 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0x14) = uVar2;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_03fae6ec(lVar7,puVar8);
    *(undefined4 *)(puVar8 + 3) = 0;
    FUN_03f85d3c(puVar8 + 2);
    puVar1 = (undefined8 *)(DAT_09535268 + 0x40);
    do {
      *puVar8 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = puVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_48 == 0) {
    std::exception_ptr::~exception_ptr((exception_ptr *)&local_48);
    return bVar5;
  }
  std::exception_ptr::exception_ptr(aeStack_60,(exception_ptr *)&local_48);
  std::rethrow_exception(aeStack_60);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}

