// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ObserveServingMode
// address: 0x4412e14
// body: available
// range: 0x4412e14-0x441300b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4413004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4413008 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__ObserveServingMode(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((DAT_09517eed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e50);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f8438);
    FUN_03f5c2a4(&DAT_091fa0f0);
    FUN_03f5c2a4(&DAT_0920cc70);
    DAT_09517eed = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar1 == iVar2) {
      return;
    }
    *(int *)(param_1 + 0x98) = iVar1;
    if (*(long *)(param_1 + 0x30) != 0) {
      cVar3 = *(char *)(param_1 + 0x80);
      *(int *)(*(long *)(param_1 + 0x30) + 0x20) = iVar1;
      if (cVar3 != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x80) = 1;
      lVar4 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = DAT_0920cc70;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
          local_48 = *(undefined4 *)(param_1 + 0x98);
          local_58 = DAT_09182e50;
          uStack_50 = 0xffffffffffffffff;
          uVar5 = System_Enum__ToString(&local_58,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar4 + 0x28) = uVar5;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),uVar5);
            if (2 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x30) = DAT_091f8438;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
              local_70 = DAT_09182e50;
              uStack_68 = 0xffffffffffffffff;
              local_60 = iVar2;
              uVar5 = System_Enum__ToString(&local_70,0);
              if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar4 + 0x38) = uVar5;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar5);
                if (4 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x40) = DAT_091fa0f0;
                  thunk_FUN_03f5d7b8();
                  uVar5 = System_String__Concat(lVar4,0);
                  CookingGraph_CookingEstimatorBot__Verbose(param_1,1,uVar5,param_2,0,0);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

