// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$ResolveIngredients
// address: 0x441f328
// body: available
// range: 0x441f328-0x441f6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441f6ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441f6f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CompositeStructureTranslator__ResolveIngredients(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  uint local_6c;
  int local_68;
  uint local_64;
  
  if ((DAT_09517f34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091ad9f8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_0917c4a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f34 = 1;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b378) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0441f444;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b378,0);
LAB_0441f444:
      uVar1 = (*(code *)*puVar4)(param_2,puVar4[1]);
      lVar9 = thunk_FUN_03f9944c(DAT_0917c4a0);
      FUN_057e0478(lVar9,uVar1,DAT_091ad9f8);
      iVar15 = 0;
      do {
        lVar10 = *param_2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b378) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0441f4e0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b378,0);
LAB_0441f4e0:
        iVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (iVar2 <= iVar15) {
          return lVar9;
        }
        lVar10 = *param_2;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917b510) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0441f540;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b510,0);
LAB_0441f540:
        uVar3 = (*(code *)*puVar4)(param_2,iVar15,puVar4[1]);
        if (((lVar14 == 0) || ((int)uVar3 < 0)) || (*(int *)(lVar14 + 0x18) <= (int)uVar3)) {
LAB_0441f63c:
          local_64 = uVar3;
          uVar5 = FUN_03f5c42c(DAT_09535420,&local_64);
          local_68 = iVar15;
          uVar6 = FUN_03f5c42c(DAT_09535420,&local_68);
          local_6c = uVar3;
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_6c);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091ff1d0);
          uVar6 = System_String__Format(uVar8,uVar6,uVar7,0);
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar7 = thunk_FUN_03f9944c();
          uVar8 = thunk_FUN_03fc39d4(&DAT_09219aa0);
          System_ArgumentOutOfRangeException___ctor(uVar7,uVar8,uVar5,uVar6,0);
          uVar5 = thunk_FUN_03fc39d4(&DAT_091c5aa8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar7,uVar5);
        }
        uVar5 = FUN_057e0998(lVar14,uVar3,DAT_091ada40);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar12 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if ((uVar12 & 1) != 0) goto LAB_0441f63c;
        uVar5 = FUN_057e0998(lVar14,uVar3,DAT_091ada40);
        lVar10 = DAT_091ada00;
        if (lVar9 == 0) break;
        lVar11 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20) = uVar5;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar9,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        iVar15 = iVar15 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

