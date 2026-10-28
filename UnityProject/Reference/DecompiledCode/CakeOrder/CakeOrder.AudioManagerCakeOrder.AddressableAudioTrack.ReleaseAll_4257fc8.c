// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$ReleaseAll
// address: 0x4257fc8
// body: available
// range: 0x4257fc8-0x42581cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4258190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__ReleaseAll(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516f36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf670);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091976e0);
    FUN_03f5c2a4(&DAT_091aa4c0);
    FUN_03f5c2a4(&DAT_091aa4d0);
    FUN_03f5c2a4(&DAT_091aa4d8);
    DAT_09516f36 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar2 = FUN_0640f598(param_1 + 0x20,DAT_091976e0);
    if ((uVar2 & 1) != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0x28);
      local_a0 = *(undefined8 *)(param_1 + 0x20);
      local_90 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_58 = uStack_98;
      local_60 = local_a0;
      local_50 = local_90;
      FUN_04b71ee0(&local_60,DAT_091bf670);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 <= iVar4) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
        return;
      }
      FUN_0564e784(&local_60,lVar3,iVar4,DAT_091aa4d8);
      uStack_78 = uStack_58;
      local_80 = local_60;
      local_70 = local_50;
      uVar2 = FUN_0640f598(&local_80,DAT_091976e0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x68) == 0) break;
        FUN_0564e784(&local_b8,*(long *)(param_1 + 0x68),iVar4,DAT_091aa4d8);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_58 = uStack_b0;
        local_60 = local_b8;
        local_50 = local_a8;
        FUN_04b71ee0(&local_60,DAT_091bf670);
      }
      lVar3 = *(long *)(param_1 + 0x68);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

