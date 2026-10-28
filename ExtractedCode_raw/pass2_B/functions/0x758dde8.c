// rea decompile_all
// name: System.IO.Path$$JoinInternal
// address: 0x758dde8
// body: available
// range: 0x758dde8-0x758e05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758e05c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Path__JoinInternal(long param_1,ulong param_2,undefined2 *param_3,ulong param_4)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_09521b4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0917e7d0);
    FUN_03f5c2a4(&DAT_091da1c0);
    FUN_03f5c2a4(&DAT_091ee3d8);
    FUN_03f5c2a4(&DAT_09193238);
    FUN_03f5c2a4(&DAT_091bef40);
    DAT_09521b4e = 1;
  }
  if ((int)param_2 == 0) {
LAB_0758e05c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *(undefined2 *)(param_1 + ((long)((param_2 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  if ((uVar5 & 1) == 0) {
    if ((int)param_4 == 0) goto LAB_0758e05c;
    uVar1 = *param_3;
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  }
  else {
    uVar4 = 1;
  }
  uVar6 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  uVar7 = FUN_04c072b4(param_3,param_4,DAT_091d3030);
  uVar6 = System_IntPtr__op_Explicit(uVar6,0);
  uVar7 = System_IntPtr__op_Explicit(uVar7,0);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_06714b50(&local_70,uVar6,param_2 & 0xffffffff,uVar7,param_4 & 0xffffffff,uVar4 & 1,
               DAT_091bef40);
  if (*(int *)(DAT_09193238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = uStack_58;
  uVar2 = uStack_60;
  uVar7 = uStack_68;
  uVar6 = local_70;
  puVar9 = *(undefined8 **)(DAT_09193238 + 0xb8);
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(DAT_09193238 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar9 = *(undefined8 **)(DAT_09193238 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = thunk_FUN_03f9944c(DAT_0917e7d0);
    FUN_06100684(lVar10,uVar11,DAT_091ee3d8,0);
    plVar8 = (long *)(*(long *)(DAT_09193238 + 0xb8) + 8);
    *plVar8 = lVar10;
    thunk_FUN_03f5d7b8(plVar8,lVar10);
  }
  local_70 = uVar6;
  uStack_68 = uVar7;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  FUN_04d642e0((int)param_4 + (int)param_2 + ((uVar4 ^ 0xffffffff) & 1),&local_70,lVar10,
               DAT_091da1c0);
  return;
}

