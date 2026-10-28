// rea decompile_all
// name: Cysharp.Threading.Tasks.PlayerLoopHelper$$Initialize
// address: 0x7d8ddb4
// body: available
// range: 0x7d8ddb4-0x7d8e8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8e8a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8e8ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_PlayerLoopHelper__Initialize(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09525d52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd48);
    FUN_03f5c2a4(&DAT_09171640);
    FUN_03f5c2a4(&DAT_091caea8);
    FUN_03f5c2a4(&DAT_091717a8);
    FUN_03f5c2a4(&DAT_09171ec8);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_09180398);
    FUN_03f5c2a4(&DAT_091727b8);
    FUN_03f5c2a4(&DAT_091727d0);
    FUN_03f5c2a4(&DAT_091727d8);
    FUN_03f5c2a4(&DAT_091731a0);
    FUN_03f5c2a4(&DAT_091740c8);
    FUN_03f5c2a4(&DAT_091740d0);
    FUN_03f5c2a4(&DAT_091740d8);
    FUN_03f5c2a4(&DAT_091740e0);
    FUN_03f5c2a4(&DAT_091740e8);
    FUN_03f5c2a4(&DAT_091740f0);
    FUN_03f5c2a4(&DAT_091740f8);
    FUN_03f5c2a4(&DAT_09174100);
    FUN_03f5c2a4(&DAT_09174108);
    FUN_03f5c2a4(&DAT_09174110);
    FUN_03f5c2a4(&DAT_09174118);
    FUN_03f5c2a4(&DAT_09174120);
    FUN_03f5c2a4(&DAT_09174128);
    FUN_03f5c2a4(&DAT_09174130);
    FUN_03f5c2a4(&DAT_09174138);
    FUN_03f5c2a4(&DAT_09174140);
    FUN_03f5c2a4(&DAT_09174148);
    FUN_03f5c2a4(&DAT_09174150);
    FUN_03f5c2a4(&DAT_09174158);
    FUN_03f5c2a4(&DAT_09174160);
    FUN_03f5c2a4(&DAT_09174168);
    FUN_03f5c2a4(&DAT_09174170);
    FUN_03f5c2a4(&DAT_09174178);
    FUN_03f5c2a4(&DAT_09174180);
    FUN_03f5c2a4(&DAT_09174188);
    FUN_03f5c2a4(&DAT_09174190);
    FUN_03f5c2a4(&DAT_09174198);
    FUN_03f5c2a4(&DAT_091741a0);
    FUN_03f5c2a4(&DAT_091741a8);
    FUN_03f5c2a4(&DAT_091741b0);
    FUN_03f5c2a4(&DAT_091741b8);
    FUN_03f5c2a4(&DAT_091741c0);
    FUN_03f5c2a4(&DAT_091733e0);
    DAT_09525d52 = 1;
  }
  uVar2 = FUN_03f5c394(DAT_0917fd48,0x10);
  if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091892e0);
  }
  puVar3 = (undefined8 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = FUN_03f5c394(DAT_09180398,0x10);
  puVar3 = (undefined8 *)(*(long *)(DAT_091892e0 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  lVar4 = FUN_04b04a6c(param_1[1],DAT_091caea8);
  uVar2 = DAT_09171ec8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174198,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740d8,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,1,0,1,uVar5,uVar6,0);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171ec8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174130,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740f0,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,2,1,0,uVar5,uVar6,1);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171640,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174188,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740c8,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,4,2,1,uVar5,uVar6,2);
  uVar2 = System_Type__GetTypeFromHandle(DAT_09171640,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174120,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740e0,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,8,3,0,uVar5,uVar6,3);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091717a8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174190,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740d0,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x10,4,1,uVar5,uVar6,4);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091717a8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174128,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740e8,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x20,5,0,uVar5,uVar6,5);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727d8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091741b0,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174170,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x40,6,1,uVar5,uVar6,6);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727d8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174148,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174108,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x80,7,0,uVar5,uVar6,7);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091733e0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091741c0,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174180,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x100,8,1,uVar5,uVar6,8);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091733e0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174158,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174118,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop(lVar4,param_2,uVar2,0x200,9,0,uVar5,uVar6,9);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727d0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091741a8,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174168,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x400,10,1,uVar5,uVar6,10);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727d0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174140,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174100,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x800,0xb,0,uVar5,uVar6,0xb);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727b8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091741a0,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174160,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x1000,0xc,1,uVar5,uVar6,0xc);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091727b8,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174138,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_091740f8,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x2000,0xd,0,uVar5,uVar6,0xd);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091731a0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_091741b8,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174178,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x4000,0xe,1,uVar5,uVar6,0xe);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091731a0,0);
  uVar5 = System_Type__GetTypeFromHandle(DAT_09174150,0);
  uVar6 = System_Type__GetTypeFromHandle(DAT_09174110,0);
  Cysharp_Threading_Tasks_PlayerLoopHelper__InsertLoop
            (lVar4,param_2,uVar2,0x8000,0xf,0,uVar5,uVar6,0xf);
  uVar2 = System_Type__GetTypeFromHandle(DAT_091733e0,0);
  uVar1 = Cysharp_Threading_Tasks_PlayerLoopHelper__FindLoopSystemIndex(lVar4,uVar2);
  if (lVar4 != 0) {
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      lVar7 = lVar4 + (long)(int)uVar1 * 0x28;
      uStack_88 = *(undefined8 *)(lVar7 + 0x28);
      local_90 = *(undefined8 *)(lVar7 + 0x20);
      uStack_78 = *(undefined8 *)(lVar7 + 0x38);
      uStack_80 = *(undefined8 *)(lVar7 + 0x30);
      local_70 = *(undefined8 *)(lVar7 + 0x40);
      uVar2 = Cysharp_Threading_Tasks_PlayerLoopHelper__InsertUniTaskSynchronizationContext
                        (&local_90);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 0x28 + 0x28) = uVar2;
        thunk_FUN_03f5d7b8();
        param_1[1] = lVar4;
        thunk_FUN_03f5d7b8(param_1 + 1,lVar4);
        uStack_b8 = param_1[1];
        local_c0 = *param_1;
        uStack_a8 = param_1[3];
        uStack_b0 = param_1[2];
        local_a0 = param_1[4];
        UnityEngine_LowLevel_PlayerLoop__SetPlayerLoop(&local_c0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

