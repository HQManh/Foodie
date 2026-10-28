// rea decompile_all
// name: MessagePack.Resolvers.ExpandoObjectResolver.PrimitiveObjectWithExpandoMaps$$DeserializeMap
// address: 0x73ab9e8
// body: available
// range: 0x73ab9e8-0x73abc87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73abc84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * MessagePack_Resolvers_ExpandoObjectResolver_PrimitiveObjectWithExpandoMaps__DeserializeMap
                 (undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((DAT_09520bb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184378);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917a210);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_0917b1f0);
    FUN_03f5c2a4(&DAT_091e9e90);
    DAT_09520bb1 = 1;
  }
  if (param_4 != 0) {
    uVar9 = *(undefined8 *)(param_4 + 0x10);
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)FUN_04264fcc(uVar9,DAT_091ccf48);
    plVar2 = (long *)FUN_04264fcc(*(undefined8 *)(param_4 + 0x10),DAT_091ccf38);
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_09184378);
    System_Dynamic_ExpandoObject___ctor(plVar3,0);
    if (0 < param_3) {
      if (plVar1 == (long *)0x0) goto LAB_073abc84;
      iVar10 = 0;
      do {
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b1f0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_073abb6c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917b1f0,1);
LAB_073abb6c:
        uVar9 = (*(code *)*puVar4)(plVar1,param_2,param_4,puVar4[1]);
        if (plVar2 == (long *)0x0) goto LAB_073abc84;
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b1e0) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_073abbd8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b1e0,1);
LAB_073abbd8:
        uVar5 = (*(code *)*puVar4)(plVar2,param_2,param_4,puVar4[1]);
        if (plVar3 == (long *)0x0) goto LAB_073abc84;
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a210) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_073abc44;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a210,5);
LAB_073abc44:
        (*(code *)*puVar4)(plVar3,uVar9,uVar5,puVar4[1]);
        iVar10 = iVar10 + 1;
      } while (iVar10 != param_3);
    }
    return plVar3;
  }
LAB_073abc84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

