// rea decompile_all
// name: System.Collections.ArrayList$$InsertRange
// address: 0x755a868
// body: available
// range: 0x755a868-0x755aac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755aac0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755aac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_ArrayList__InsertRange(long param_1,int param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_0952197d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952197d = 1;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09218730);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091feb58);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar6,0);
  }
  else {
    if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x18))) {
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091857d8) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0755a91c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091857d8,1);
LAB_0755a91c:
      iVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
      if (0 < iVar2) {
        System_Collections_ArrayList__EnsureCapacity(param_1,*(int *)(param_1 + 0x18) + iVar2);
        iVar1 = *(int *)(param_1 + 0x18) - param_2;
        if (iVar1 != 0 && param_2 <= *(int *)(param_1 + 0x18)) {
          System_Array__Copy(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10)
                             ,iVar2 + param_2,iVar1,0);
        }
        lVar7 = FUN_03f5c394(DAT_09180318,iVar2);
        lVar8 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_091857d8) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0755a9cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091857d8,0);
LAB_0755a9cc:
        (*(code *)*puVar3)(param_3,lVar7,0,puVar3[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Array__CopyTo(lVar7,*(undefined8 *)(param_1 + 0x10),param_2,0);
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + iVar2);
      }
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092049a8);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c0e08);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

