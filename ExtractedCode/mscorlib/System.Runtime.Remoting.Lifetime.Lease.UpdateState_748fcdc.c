// rea decompile_all
// name: System.Runtime.Remoting.Lifetime.Lease$$UpdateState
// address: 0x748fcdc
// body: available
// range: 0x748fcdc-0x748fe3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748fe38 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0748fe0c) */
/* WARNING: Removing unreachable block (ram,0x0748fe34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Runtime_Remoting_Lifetime_Lease__UpdateState(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char local_2c [4];
  long local_28;
  
  if ((DAT_095212ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091898f8);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095212ec = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  if (*(int *)(param_1 + 0x20) == 2) {
    uVar1 = System_Runtime_Remoting_Lifetime_Lease__get_CurrentLeaseTime(param_1);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar2 = System_TimeSpan__op_GreaterThan(uVar1,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 3;
        local_2c[0] = '\0';
        local_28 = param_1;
        System_Threading_Monitor__Enter(param_1,local_2c,0);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        uVar1 = thunk_FUN_03f9944c(DAT_091898f8);
        System_Collections_Queue___ctor(uVar1,uVar3,0);
        *(undefined8 *)(param_1 + 0x48) = uVar1;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
        if (local_2c[0] != '\0') {
          System_Threading_Monitor__Exit(local_28,0);
        }
        System_Runtime_Remoting_Lifetime_Lease__CheckNextSponsor(param_1);
      }
    }
  }
  return;
}

