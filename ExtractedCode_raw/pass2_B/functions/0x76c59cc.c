// rea decompile_all
// name: Newtonsoft.Json.Serialization.MemoryTraceWriter$$ToString
// address: 0x76c59cc
// body: available
// range: 0x76c59cc-0x76c5b77 inclusive
// range: 0x76c5c00-0x76c5c43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c5b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5b70 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5c40 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076c5b44) */
/* WARNING: Removing unreachable block (ram,0x076c5c00) */
/* WARNING: Removing unreachable block (ram,0x076c5b6c) */

undefined8 Newtonsoft_Json_Serialization_MemoryTraceWriter__ToString(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long local_78;
  char *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09522706 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a45b0);
    FUN_03f5c2a4(&DAT_091a45b8);
    FUN_03f5c2a4(&DAT_091a45c0);
    FUN_03f5c2a4(&DAT_091b8cf8);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09522706 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_70 = local_3c;
  local_78 = 0;
  local_68 = &local_38;
  local_3c[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  plVar2 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar2,0);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_05e2d090(&local_90,*(long *)(param_1 + 0x10),DAT_091b8cf8);
  uStack_58 = puStack_88;
  local_60 = local_90;
  local_50 = local_80;
  puStack_88 = &local_60;
  local_90 = 0;
  while (uVar3 = FUN_071bddb4(&local_60,DAT_091a45b8), (uVar3 & 1) != 0) {
    uVar4 = FUN_071bdea4(&local_60,DAT_091a45c0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = System_Text_StringBuilder__get_Length(plVar2,0);
    if (0 < iVar1) {
      System_Text_StringBuilder__AppendLine(plVar2,0);
    }
    System_Text_StringBuilder__Append(plVar2,uVar4,0);
  }
  FUN_071bdda4(&local_60,DAT_091a45b0);
  if (plVar2 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (*local_70 != '\0') {
      System_Threading_Monitor__Exit(*local_68,0);
    }
    if (local_78 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

