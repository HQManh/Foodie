// rea decompile_all
// name: LiveOpsR1.LiveOpsDataAccessWrapper$$ChangeFloat
// address: 0x735d508
// body: available
// range: 0x735d508-0x735d657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x735d650 to 0x6077998 FUN_06077998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x735d654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpsDataAccessWrapper__ChangeFloat
               (float param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  char local_34 [4];
  
  if ((DAT_09520821 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fe08);
    FUN_03f5c2a4(&DAT_0919fe18);
    FUN_03f5c2a4(&DAT_0919fe30);
    FUN_03f5c2a4(&DAT_0919fe38);
    FUN_03f5c2a4(&DAT_091b9cf0);
    DAT_09520821 = 1;
  }
  local_34[0] = '\0';
  if (*(long *)(param_3 + 0x10) == 0) goto LAB_0735d654;
  lVar1 = LiveOpsR1_LiveOpsDataManager__GetOrCreateDataPack
                    (*(long *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),local_34);
  if (local_34[0] == '\0') {
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_0735d654;
    uVar2 = FUN_06fe2cf4(*(long *)(lVar1 + 0x20),param_4,DAT_0919fe18);
    if ((uVar2 & 1) == 0) goto LAB_0735d608;
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 == 0) goto LAB_0735d654;
    fVar3 = (float)FUN_06fe2a7c(lVar1,param_4,DAT_0919fe30);
    FUN_06fe2ae8(fVar3 + param_1,lVar1,param_4,DAT_0919fe38);
  }
  else {
    if (lVar1 == 0) goto LAB_0735d654;
LAB_0735d608:
    if (*(long *)(lVar1 + 0x20) == 0) goto LAB_0735d654;
    FUN_06fe2afc(param_1 + param_2,*(long *)(lVar1 + 0x20),param_4,DAT_0919fe08);
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_06077998(*(long *)(param_3 + 0x10),0,DAT_091b9cf0);
    return;
  }
LAB_0735d654:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

