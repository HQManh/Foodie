// rea decompile_all
// name: Mono.Xml.SecurityParser$$OnStartElement
// address: 0x74131ac
// body: available
// range: 0x74131ac-0x741344b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7413444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7413448 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Xml_SecurityParser__OnStartElement(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  
  if ((DAT_09520f2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_0918a7f0);
    DAT_09520f2d = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918a7f0);
  System_Security_SecurityElement___ctor(lVar2,param_2,0);
  if (*(long *)(param_1 + 0x68) == 0) {
    *(long *)(param_1 + 0x68) = lVar2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x68),lVar2);
    *(long *)(param_1 + 0x70) = lVar2;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x70),lVar2);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x78);
    if (plVar3 == (long *)0x0) goto LAB_07413444;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
    if (plVar3 == (long *)0x0) goto LAB_07413444;
    if (*plVar3 != DAT_0918a7f0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    System_Security_SecurityElement__AddChild(plVar3,lVar2,0);
  }
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x268))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x270));
    plVar3 = (long *)(param_1 + 0x70);
    *plVar3 = lVar2;
    thunk_FUN_03f5d7b8(plVar3,lVar2);
    if (param_3 != (long *)0x0) {
      lVar2 = *param_3;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09194970) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07413300;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,0);
LAB_07413300:
      iVar1 = (*(code *)*puVar4)(param_3,puVar4[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          lVar2 = *param_3;
          lVar10 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09194970) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_07413370;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,1);
LAB_07413370:
          uVar5 = (*(code *)*puVar4)(param_3,iVar9,puVar4[1]);
          lVar2 = *param_3;
          uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09194970) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_074133d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(param_3,DAT_09194970,2);
LAB_074133d4:
          uVar6 = (*(code *)*puVar4)(param_3,iVar9,puVar4[1]);
          if (*(int *)(DAT_0918a7f0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918a7f0);
          }
          uVar6 = System_Security_SecurityElement__Escape(uVar6,0);
          if (lVar10 == 0) goto LAB_07413444;
          System_Security_SecurityElement__AddAttribute(lVar10,uVar5,uVar6,0);
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_07413444:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

