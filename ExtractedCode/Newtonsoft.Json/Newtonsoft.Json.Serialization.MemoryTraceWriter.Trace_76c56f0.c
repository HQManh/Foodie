// rea decompile_all
// name: Newtonsoft.Json.Serialization.MemoryTraceWriter$$Trace
// address: 0x76c56f0
// body: available
// range: 0x76c56f0-0x76c5977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c5964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c596c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c5974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076c5968) */

void Newtonsoft_Json_Serialization_MemoryTraceWriter__Trace
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 *local_60;
  char local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09522705 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b8ce8);
    FUN_03f5c2a4(&DAT_091b8cf0);
    FUN_03f5c2a4(&DAT_091b8d08);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918bf90);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_0921bc38);
    FUN_03f5c2a4(&DAT_09225d48);
    DAT_09522705 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_54[0] = '\0';
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_48 = System_DateTime__get_Now(0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ff8);
  }
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar2 = System_DateTime__ToString(&local_48,DAT_09225d48,uVar2,0);
  if (plVar1 != (long *)0x0) {
    System_Text_StringBuilder__Append(plVar1,uVar2,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091f5a98,0);
    local_70 = CONCAT44(local_70._4_4_,param_2);
    uVar2 = FUN_03f5c42c(DAT_0918bf90,&local_70);
    uVar2 = System_Enum__ToString(uVar2,DAT_0921bc38,0);
    System_Text_StringBuilder__Append(plVar1,uVar2,0);
    System_Text_StringBuilder__Append(plVar1,DAT_091f5a98,0);
    System_Text_StringBuilder__Append(plVar1,param_3,0);
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    local_50 = *(undefined8 *)(param_1 + 0x18);
    pcStack_68 = local_54;
    local_70 = 0;
    local_60 = &local_50;
    local_54[0] = '\0';
    System_Threading_Monitor__Enter(local_50,local_54,0);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (999 < *(int *)(lVar3 + 0x20)) {
      FUN_05e2d168(lVar3,DAT_091b8ce8);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    FUN_05e2cfd8(lVar3,uVar2,DAT_091b8cf0);
    if (local_54[0] != '\0') {
      System_Threading_Monitor__Exit(*local_60,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

