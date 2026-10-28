// rea decompile_all
// name: MessagePack.MessagePackStreamReader$$get_RemainingBytes
// address: 0x739bf00
// body: available
// range: 0x739bf00-0x739c03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739c038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackStreamReader__get_RemainingBytes(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09520b26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b73e0);
    FUN_03f5c2a4(&DAT_091b73e8);
    FUN_03f5c2a4(&DAT_091b96f0);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba038);
    DAT_09520b26 = 1;
  }
  lVar1 = *(long *)(param_2 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (lVar1 == 0) goto LAB_0739c038;
    FUN_060c8e44(&local_68,lVar1,DAT_091ba038);
    local_70 = local_58;
    local_80 = local_68;
    uStack_78 = uStack_60;
  }
  else {
    if (lVar1 == 0) {
LAB_0739c038:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060c8e44(&local_68,lVar1,DAT_091ba038);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    auVar2 = FUN_05c3716c((char *)(param_2 + 0x30),DAT_091b73e8);
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04c253a0(&local_80,&local_50,auVar2._0_8_,auVar2._8_8_,DAT_091b96f0);
  }
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}

