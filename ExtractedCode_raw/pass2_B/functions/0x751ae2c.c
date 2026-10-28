// rea decompile_all
// name: System.AggregateException$$Flatten
// address: 0x751ae2c
// body: available
// range: 0x751ae2c-0x751b1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x751b1e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_AggregateException__Flatten(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  
  if ((DAT_09521745 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181018);
    FUN_03f5c2a4(&DAT_0917a040);
    FUN_03f5c2a4(&DAT_0917b050);
    FUN_03f5c2a4(&DAT_091ac9b0);
    FUN_03f5c2a4(&DAT_091aaf10);
    FUN_03f5c2a4(&DAT_091aaf08);
    FUN_03f5c2a4(&DAT_091ac998);
    FUN_03f5c2a4(&DAT_091aaf18);
    FUN_03f5c2a4(&DAT_091aaf20);
    FUN_03f5c2a4(&DAT_0917bc28);
    FUN_03f5c2a4(&DAT_0917c120);
    DAT_09521745 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917c120);
  FUN_057e0400(lVar3,DAT_091ac998);
  lVar4 = thunk_FUN_03f9944c(DAT_0917bc28);
  FUN_057e0400(lVar4,DAT_091aaf08);
  lVar6 = DAT_091aaf10;
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = param_1;
        thunk_FUN_03f5d7b8(puVar5,param_1);
      }
      else {
        FUN_057e0c68(lVar4,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(int *)(lVar4 + 0x18) < 1) {
LAB_0751b194:
        uVar8 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
        uVar9 = thunk_FUN_03f9944c(DAT_09181018);
        System_AggregateException___ctor(uVar9,uVar8,lVar3);
        return uVar9;
      }
      iVar14 = 0;
LAB_0751afd0:
      lVar6 = FUN_057e0998(lVar4,iVar14,DAT_091aaf20);
      if ((lVar6 != 0) && (plVar15 = *(long **)(lVar6 + 0x90), plVar15 != (long *)0x0)) {
        iVar16 = 0;
        iVar14 = iVar14 + 1;
        do {
          lVar6 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917a040) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0751b040;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917a040,0);
LAB_0751b040:
          iVar2 = (*(code *)*puVar5)(plVar15,puVar5[1]);
          if (iVar2 <= iVar16) goto LAB_0751b188;
          lVar6 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b050) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0751b0a0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b050,0);
LAB_0751b0a0:
          plVar7 = (long *)(*(code *)*puVar5)(plVar15,iVar16,puVar5[1]);
          lVar10 = DAT_091ac9b0;
          lVar6 = DAT_091aaf10;
          if (plVar7 != (long *)0x0) {
            if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_09181018 + 0x130)) ||
               (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(DAT_09181018 + 0x130) * 8 + -8
                         ) != DAT_09181018)) {
              if (lVar3 == 0) break;
              lVar11 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar11 == 0) break;
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                lVar10 = *(long *)(lVar10 + 0x20);
                lVar6 = lVar3;
LAB_0751b130:
                FUN_057e0c68(lVar6,plVar7,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
                goto LAB_0751b13c;
              }
              lVar11 = lVar11 + (long)(int)uVar1 * 8;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            }
            else {
              lVar11 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar11 == 0) break;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                lVar10 = *(long *)(lVar6 + 0x20);
                lVar6 = lVar4;
                goto LAB_0751b130;
              }
              lVar11 = lVar11 + (long)(int)uVar1 * 8;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            }
            *(long **)(lVar11 + 0x20) = plVar7;
            thunk_FUN_03f5d7b8();
          }
LAB_0751b13c:
          iVar16 = iVar16 + 1;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0751b188:
  if (*(int *)(lVar4 + 0x18) <= iVar14) goto LAB_0751b194;
  goto LAB_0751afd0;
}

