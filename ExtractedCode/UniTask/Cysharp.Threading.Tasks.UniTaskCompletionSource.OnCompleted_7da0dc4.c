// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskCompletionSource$$OnCompleted
// address: 0x7da0dc4
// body: available
// range: 0x7da0dc4-0x7da1003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da0ff8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da0ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da1000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07da0ff4) */

void Cysharp_Threading_Tasks_UniTaskCompletionSource__OnCompleted
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 *local_48;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09525e8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aa940);
    FUN_03f5c2a4(&DAT_091aa938);
    FUN_03f5c2a4(&DAT_0917baf0);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_091beb98);
    DAT_09525e8c = 1;
  }
  local_38 = 0;
  plVar6 = (long *)(param_1 + 0x20);
  local_3c[0] = '\0';
  if (*plVar6 == 0) {
    uVar3 = thunk_FUN_03f9944c(DAT_09188ac8);
    System_Object___ctor(uVar3,0);
    System_Threading_Interlocked__CompareExchange(plVar6,uVar3,0,0);
  }
  local_38 = thunk_FUN_03f6a508(plVar6,0);
  pcStack_50 = local_3c;
  local_3c[0] = '\0';
  local_58 = 0;
  local_48 = &local_38;
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  if (*(int *)(param_1 + 0x40) == 0) {
    plVar6 = (long *)(param_1 + 0x28);
    if (*plVar6 != 0) {
      plVar6 = (long *)(param_1 + 0x38);
      lVar7 = *plVar6;
      if (lVar7 == 0) {
        lVar7 = thunk_FUN_03f9944c(DAT_0917baf0);
        FUN_056bdd10(lVar7,DAT_091aa938);
        *plVar6 = lVar7;
        thunk_FUN_03f5d7b8(plVar6,lVar7);
        lVar7 = *plVar6;
      }
      local_68 = 0;
      uStack_60 = 0;
      FUN_066cee64(&local_68,param_2,param_3,DAT_091beb98);
      lVar2 = DAT_091aa940;
      if (lVar7 != 0) {
        lVar5 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar5 + 0x20);
            *puVar4 = local_68;
            *(undefined8 *)(lVar5 + 0x28) = uStack_60;
            thunk_FUN_03f5d7b8(puVar4,0);
          }
          else {
            FUN_056be5bc(lVar7,local_68,uStack_60,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_07da0ec4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),param_3);
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(param_2 + 0x18))
              (*(undefined8 *)(param_2 + 0x40),param_3,*(undefined8 *)(param_2 + 0x28));
  }
LAB_07da0ec4:
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(*local_48,0);
  }
  return;
}

