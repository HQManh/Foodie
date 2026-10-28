// rea decompile_all
// name: ChocDino.UIFX.BlurFilter$$ChangeAlgorithm
// address: 0x43c45dc
// body: available
// range: 0x43c45dc-0x43c47d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c47d0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_BlurFilter__ChangeAlgorithm(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09517b9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f80);
    FUN_03f5c2a4(&DAT_09184b90);
    FUN_03f5c2a4(&DAT_09186810);
    FUN_03f5c2a4(&DAT_0918b9f8);
    DAT_09517b9b = 1;
  }
  plVar8 = *(long **)(param_1 + 0x208);
  plVar1 = (long *)(param_1 + 0x208);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186810) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_043c4690;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186810,8);
LAB_043c4690:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
    *(undefined8 *)(param_1 + 0x208) = 0;
    thunk_FUN_03f5d7b8(plVar1,0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x1f0,0);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x1f8,0);
    *(undefined8 *)(param_1 + 0x200) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x200,0);
  }
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (iVar2 < 0x33) {
    if (iVar2 == 0x32) {
      lVar4 = thunk_FUN_03f9944c(DAT_0918b9f8);
      *(undefined1 *)(lVar4 + 0x10) = 1;
      *(undefined1 *)(lVar4 + 0x44) = 1;
      *(undefined8 *)(lVar4 + 0x18) = 0x3f8000003d4ccccd;
      System_Object___ctor(lVar4,0);
      *(long *)(param_1 + 0x1f8) = lVar4;
      lVar5 = param_1 + 0x1f8;
      goto LAB_043c47b4;
    }
  }
  else if (iVar2 == 1000) {
    lVar4 = thunk_FUN_03f9944c(DAT_09184b90);
    *(undefined2 *)(lVar4 + 0x48) = 0x101;
    *(undefined4 *)(lVar4 + 0x14) = 0x3d4ccccd;
    System_Object___ctor(lVar4,0);
    lVar5 = param_1 + 0x200;
    *(long *)(param_1 + 0x200) = lVar4;
    goto LAB_043c47b4;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09181f80);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  *(undefined4 *)(lVar4 + 0x14) = 3;
  *(undefined4 *)(lVar4 + 0x1c) = 0x3d4ccccd;
  *(undefined1 *)(lVar4 + 0x44) = 1;
  System_Object___ctor(lVar4,0);
  *(long *)(param_1 + 0x1f0) = lVar4;
  lVar5 = param_1 + 0x1f0;
LAB_043c47b4:
  thunk_FUN_03f5d7b8(lVar5,lVar4);
  *plVar1 = lVar4;
  thunk_FUN_03f5d7b8(plVar1,lVar4);
  return;
}

