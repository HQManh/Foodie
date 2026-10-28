// rea decompile_all
// name: System.IO.Path$$JoinInternal
// address: 0x758e170
// body: available
// range: 0x758e170-0x758e4cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758e4c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Path__JoinInternal
               (long param_1,ulong param_2,undefined2 *param_3,ulong param_4,undefined2 *param_5,
               ulong param_6)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09521b4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0917e7d8);
    FUN_03f5c2a4(&DAT_091da1c8);
    FUN_03f5c2a4(&DAT_091ee3e0);
    FUN_03f5c2a4(&DAT_09193238);
    FUN_03f5c2a4(&DAT_091beb90);
    FUN_03f5c2a4(&DAT_091bef48);
    DAT_09521b4f = 1;
  }
  if ((int)param_2 == 0) {
LAB_0758e4c8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = *(undefined2 *)(param_1 + ((long)((param_2 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  iVar13 = (int)param_4;
  if ((uVar7 & 1) == 0) {
    if (iVar13 == 0) goto LAB_0758e4c8;
    uVar1 = *param_3;
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  }
  else {
    if (iVar13 == 0) goto LAB_0758e4c8;
    uVar5 = 1;
  }
  uVar1 = *(undefined2 *)((long)param_3 + ((long)((param_4 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  if ((uVar7 & 1) == 0) {
    if ((int)param_6 == 0) goto LAB_0758e4c8;
    uVar1 = *param_5;
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_IO_PathInternal__IsDirectorySeparator(uVar1,0);
  }
  else {
    uVar6 = 1;
  }
  uVar8 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  uVar9 = FUN_04c072b4(param_3,param_4,DAT_091d3030);
  uVar10 = FUN_04c072b4(param_5,param_6,DAT_091d3030);
  uVar8 = System_IntPtr__op_Explicit(uVar8,0);
  uVar9 = System_IntPtr__op_Explicit(uVar9,0);
  uVar10 = System_IntPtr__op_Explicit(uVar10,0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  FUN_067320e8(&local_90,uVar8,param_2 & 0xffffffff,uVar9,param_4 & 0xffffffff,uVar10,
               param_6 & 0xffffffff,uVar5 & 1,uVar6 & 1,DAT_091bef48);
  if (*(int *)(DAT_09193238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = uStack_68;
  uVar3 = local_70;
  uVar2 = uStack_78;
  uVar10 = local_80;
  uVar9 = uStack_88;
  uVar8 = local_90;
  puVar12 = *(undefined8 **)(DAT_09193238 + 0xb8);
  lVar14 = puVar12[2];
  if (lVar14 == 0) {
    if (*(int *)(DAT_09193238 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar12 = *(undefined8 **)(DAT_09193238 + 0xb8);
    }
    uVar15 = *puVar12;
    lVar14 = thunk_FUN_03f9944c(DAT_0917e7d8);
    FUN_06100758(lVar14,uVar15,DAT_091ee3e0,0);
    plVar11 = (long *)(*(long *)(DAT_09193238 + 0xb8) + 0x10);
    *plVar11 = lVar14;
    thunk_FUN_03f5d7b8(plVar11,lVar14);
  }
  local_90 = uVar8;
  uStack_88 = uVar9;
  local_80 = uVar10;
  uStack_78 = uVar2;
  local_70 = uVar3;
  uStack_68 = uVar4;
  FUN_04d64418(iVar13 + (int)param_2 + (int)param_6 + ((uVar5 ^ 0xffffffff) & 1) +
               ((uVar6 ^ 0xffffffff) & 1),&local_90,lVar14,DAT_091da1c8);
  return;
}

