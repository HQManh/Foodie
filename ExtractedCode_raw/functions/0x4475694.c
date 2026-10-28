// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReadSnapshot
// address: 0x4475694
// body: available
// range: 0x4475694-0x44760b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44760ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44760b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__ReadSnapshot(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_88;
  long local_78;
  
  if ((DAT_09518082 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6790);
    FUN_03f5c2a4(&DAT_091c6798);
    FUN_03f5c2a4(&DAT_09182e00);
    FUN_03f5c2a4(&DAT_09182e70);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_091c96b8);
    FUN_03f5c2a4(&DAT_091ca0b8);
    FUN_03f5c2a4(&DAT_091ca8b8);
    FUN_03f5c2a4(&DAT_091ca828);
    FUN_03f5c2a4(&DAT_091ca560);
    FUN_03f5c2a4(&DAT_091ca2a0);
    FUN_03f5c2a4(&DAT_091cac00);
    FUN_03f5c2a4(&DAT_091cabf0);
    FUN_03f5c2a4(&DAT_091cad60);
    FUN_03f5c2a4(&DAT_091cad80);
    FUN_03f5c2a4(&DAT_091cad98);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb3c8);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178378);
    FUN_03f5c2a4(&DAT_09178370);
    FUN_03f5c2a4(&DAT_09178bb0);
    FUN_03f5c2a4(&DAT_091793a8);
    FUN_03f5c2a4(&DAT_09179398);
    FUN_03f5c2a4(&DAT_09179560);
    FUN_03f5c2a4(&DAT_091ac078);
    FUN_03f5c2a4(&DAT_091ac080);
    FUN_03f5c2a4(&DAT_091ac070);
    FUN_03f5c2a4(&DAT_0917bf70);
    FUN_03f5c2a4(&DAT_091e7870);
    FUN_03f5c2a4(&DAT_091e7878);
    FUN_03f5c2a4(&DAT_091e7898);
    FUN_03f5c2a4(&DAT_091e78a0);
    FUN_03f5c2a4(&DAT_091e78a8);
    FUN_03f5c2a4(&DAT_091e78b0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518082 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  local_78 = 0;
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar14 = puVar7[0xb5];
  if (lVar14 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar16 = *puVar7;
    lVar14 = thunk_FUN_03f9944c(DAT_09179560);
    FUN_05330e2c(lVar14,uVar16,DAT_091e7870,0);
    lVar8 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar8 + 0x5a8) = lVar14;
    thunk_FUN_03f5d7b8(lVar8 + 0x5a8,lVar14);
  }
  uVar12 = FUN_04afaa90(uVar12,lVar14,DAT_091ca8b8);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f298);
  }
  puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar14 = puVar7[0xb6];
  if (lVar14 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
      puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar16 = *puVar7;
    lVar14 = thunk_FUN_03f9944c(DAT_09178370);
    FUN_05310b64(lVar14,uVar16,DAT_091e7878,0);
    lVar8 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar8 + 0x5b0) = lVar14;
    thunk_FUN_03f5d7b8(lVar8 + 0x5b0,lVar14);
  }
  uVar12 = FUN_04b0b5e0(uVar12,lVar14,DAT_091cb3c8);
  uVar16 = thunk_FUN_03f9944c(DAT_09178378);
  FUN_0531153c(uVar16,param_1,DAT_091c6790,0);
  uVar12 = FUN_04af0154(uVar12,uVar16,DAT_091ca2a0);
  uVar12 = FUN_04b049e4(uVar12,DAT_091cad98);
  lVar14 = thunk_FUN_03f9944c(DAT_0917bf70);
  FUN_057e0400(lVar14,DAT_091ac070);
  lVar8 = *(long *)(param_1 + 0x78);
  if ((lVar8 != 0) && (lVar9 = *(long *)(lVar8 + 0x20), lVar9 != 0)) {
    for (uVar15 = 0; (int)uVar15 < *(int *)(lVar9 + 0x18); uVar15 = uVar15 + 1) {
      iVar17 = 0;
      while( true ) {
        lVar9 = *(long *)(lVar8 + 0x20);
        if (lVar9 == 0) goto LAB_044760ac;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar9 + (ulong)uVar15 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_044760ac;
        if (*(int *)(lVar10 + 0x18) <= iVar17) break;
        lVar8 = *(long *)(param_1 + 0xb0);
        local_88 = 0;
        FUN_066c1fdc(&local_88,uVar15,iVar17,DAT_091bec98);
        if (lVar8 == 0) goto LAB_044760ac;
        FUN_06e4da10(lVar8,local_88,&local_78,DAT_0919c1a0);
        if (local_78 == 0) {
          cVar11 = '\0';
          bVar3 = false;
          uVar16 = 0;
          uVar20 = 0;
          uVar18 = 0xffffffff;
        }
        else {
          if (*(char *)(local_78 + 0x38) == '\0') {
            bVar3 = *(double *)(local_78 + 0x30) + 1e-08 < *(double *)(local_78 + 0x28);
          }
          else {
            bVar3 = false;
          }
          uVar16 = *(undefined8 *)(local_78 + 0x28);
          uVar20 = *(undefined8 *)(local_78 + 0x30);
          cVar11 = *(char *)(local_78 + 0x38);
          uVar18 = *(undefined4 *)(local_78 + 0x1c);
        }
        uVar4 = CookingGraph_CookingLevelSimulation__LaneSlots(param_1,uVar15,iVar17);
        uVar4 = FUN_04b0462c(uVar4,DAT_091cae30);
        uVar5 = thunk_FUN_03f9944c(DAT_09182e70);
        CookingGraph_CookingToolLaneSnapshot___ctor
                  (uVar20,uVar16,uVar5,uVar15,iVar17,bVar3,cVar11 != '\0',uVar18,uVar4,0);
        lVar8 = DAT_091ac078;
        if (lVar14 == 0) goto LAB_044760ac;
        lVar9 = *(long *)(lVar14 + 0x10);
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_044760ac;
        uVar2 = *(uint *)(lVar14 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar5;
          thunk_FUN_03f5d7b8(puVar7,uVar5);
        }
        else {
          FUN_057e0c68(lVar14,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(param_1 + 0x78);
        iVar17 = iVar17 + 1;
        if (lVar8 == 0) goto LAB_044760ac;
      }
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar16 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
      uVar20 = thunk_FUN_03f9944c(DAT_09178bb0);
      FUN_0531612c(uVar20,param_1,DAT_091c6798,0);
      uVar16 = FUN_04af36b8(uVar16,uVar20,DAT_091ca560);
      uVar16 = FUN_04b049e4(uVar16,DAT_091cad80);
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar20 = CookingGraph_Execution_CookingExecution__ReadSnapshot(*(long *)(param_1 + 0x178),0)
        ;
        uVar5 = *(undefined8 *)(param_1 + 400);
        uVar18 = *(undefined4 *)(param_1 + 0x188);
        uVar1 = *(undefined4 *)(param_1 + 0x18c);
        uVar4 = FUN_04ad43f0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                             DAT_091c96b8);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar8 = puVar7[0xba];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar19 = *puVar7;
          lVar8 = thunk_FUN_03f9944c(DAT_091793a8);
          FUN_053239c8(lVar8,uVar19,DAT_091e7898,0);
          lVar9 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar9 + 0x5d0) = lVar8;
          thunk_FUN_03f5d7b8(lVar9 + 0x5d0,lVar8);
        }
        uVar4 = FUN_04aeab54(uVar4,lVar8,DAT_091ca0b8);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar8 = puVar7[0xbb];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar19 = *puVar7;
          lVar8 = thunk_FUN_03f9944c(DAT_09179398);
          FUN_05324070(lVar8,uVar19,DAT_091e78a0,0);
          lVar9 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar9 + 0x5d8) = lVar8;
          thunk_FUN_03f5d7b8(lVar9 + 0x5d8,lVar8);
        }
        uVar4 = FUN_04af8044(uVar4,lVar8,DAT_091ca828);
        uVar4 = FUN_04b049e4(uVar4,DAT_091cad60);
        uVar19 = *(undefined8 *)(param_1 + 0xa0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar8 = puVar7[0xbc];
        if (lVar8 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar13 = *puVar7;
          lVar8 = thunk_FUN_03f9944c(DAT_09179390);
          FUN_05322d94(lVar8,uVar13,DAT_091e78a8,0);
          lVar9 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar9 + 0x5e0) = lVar8;
          thunk_FUN_03f5d7b8(lVar9 + 0x5e0,lVar8);
        }
        uVar19 = FUN_04b02d34(uVar19,lVar8,DAT_091cac00);
        if ((*(long *)(param_1 + 0x180) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar8 != 0)) {
          uVar19 = FUN_04b02940(uVar19,*(undefined4 *)(lVar8 + 0x28),DAT_091cabf0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar8 = puVar7[0xbd];
          if (lVar8 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar13 = *puVar7;
            lVar8 = thunk_FUN_03f9944c(DAT_09179398);
            FUN_05324070(lVar8,uVar13,DAT_091e78b0,0);
            lVar9 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar9 + 0x5e8) = lVar8;
            thunk_FUN_03f5d7b8(lVar9 + 0x5e8,lVar8);
          }
          uVar19 = FUN_04af8044(uVar19,lVar8,DAT_091ca828);
          uVar19 = FUN_04b049e4(uVar19,DAT_091cad60);
          if (lVar14 != 0) {
            uVar13 = FUN_057e28a4(lVar14,DAT_091ac080);
            uVar6 = thunk_FUN_03f9944c(DAT_09182e00);
            CookingGraph_CookingLevelSnapshot___ctor
                      (uVar6,uVar20,uVar5,uVar18,uVar1,uVar12,uVar4,uVar19,uVar13,uVar16,0);
            return uVar6;
          }
        }
      }
    }
  }
LAB_044760ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

