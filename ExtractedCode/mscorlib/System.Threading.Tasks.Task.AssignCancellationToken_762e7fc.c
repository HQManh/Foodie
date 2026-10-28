// rea decompile_all
// name: System.Threading.Tasks.Task$$AssignCancellationToken
// address: 0x762e7fc
// body: available
// range: 0x762e7fc-0x762ea1b inclusive
// range: 0x762eab8-0x762eabb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762eab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__AssignCancellationToken
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  if ((DAT_095221d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182360);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091bd6b8);
    FUN_03f5c2a4(&DAT_0917efe0);
    DAT_095221d1 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x48);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  thunk_FUN_03f6a5cc();
  if ((lVar4 == 0) &&
     (lVar4 = System_Threading_Tasks_Task__EnsureContingentPropertiesInitializedCore(param_1,0),
     lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar4 + 0x28) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),0);
  uVar1 = System_Threading_Tasks_Task__get_Options(param_1);
  if ((uVar1 & 0x3400) == 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_48,0);
    if ((uVar2 & 1) == 0) {
      if (param_3 == 0) {
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x18);
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182348);
        }
        System_Threading_CancellationToken__InternalRegisterWithoutEC
                  (&local_90,&local_48,uVar3,param_1,0);
      }
      else {
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x18);
        uVar3 = thunk_FUN_03f9944c(DAT_0917efe0);
        FUN_063ab9d8(uVar3,param_1,param_3,param_4,DAT_091bd6b8);
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Threading_CancellationToken__InternalRegisterWithoutEC
                  (&local_90,&local_48,uVar5,uVar3,0);
      }
      uStack_58 = uStack_88;
      local_60 = local_90;
      local_50 = local_80;
      uVar3 = FUN_03f5c42c(DAT_09182360,&local_90);
      *(undefined8 *)(lVar4 + 0x30) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
    }
    else {
      System_Threading_Tasks_Task__InternalCancel(param_1,0);
    }
  }
  return;
}

