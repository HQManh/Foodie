// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$NewUri
// address: 0x7488288
// body: available
// range: 0x7488288-0x748856b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7488558 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748855c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488564 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7488568 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07488560) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_RemotingServices__NewUri(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 local_4c;
  undefined1 local_48 [16];
  char local_34 [4];
  undefined8 local_30;
  undefined4 local_24;
  
  if ((DAT_09521293 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09225918);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_091f93a8);
    FUN_03f5c2a4(&DAT_091f9400);
    DAT_09521293 = 1;
  }
  local_24 = 0;
  local_30 = 0;
  local_34[0] = '\0';
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_4c = 0;
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_09189ed8 + 0xb8);
  if (*(long *)(lVar3 + 0x18) == 0) {
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_09189ed8 + 0xb8);
    }
    local_30 = *(undefined8 *)(lVar3 + 0x20);
    local_34[0] = '\0';
    System_Threading_Monitor__Enter(local_30,local_34,0);
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x18) == 0) {
      local_48 = System_Guid__NewGuid(0);
      lVar3 = System_Guid__ToString(local_48,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_String__Replace(lVar3,0x2d,0x5f,0);
      uVar1 = System_String__Concat(uVar1,DAT_091f9400,0);
      if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar2 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x18);
      *puVar2 = uVar1;
      thunk_FUN_03f5d7b8(puVar2,uVar1);
    }
    if (local_34[0] != '\0') {
      System_Threading_Monitor__Exit(local_30,0);
    }
  }
  if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_24 = System_Threading_Interlocked__Increment(*(long *)(DAT_09189ed8 + 0xb8) + 0x28,0);
  lVar3 = FUN_03f5c394(DAT_091805f8,5);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x18);
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
      local_4c = System_Environment__get_TickCount(0);
      uVar1 = System_Int32__ToString(&local_4c,DAT_09225918,0);
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28),uVar1);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = DAT_09214950;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
          uVar1 = System_Int32__ToString(&local_24,0);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = uVar1;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38),uVar1);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = DAT_091f93a8;
              thunk_FUN_03f5d7b8();
              System_String__Concat(lVar3,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

