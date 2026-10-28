// rea decompile_all
// name: SystemNative_GetNonCryptographicallySecureRandomBytes
// address: 0x3f85884
// body: available
// range: 0x3f85884-0x3f859f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SystemNative_GetNonCryptographicallySecureRandomBytes(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  time_t __seedval;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((bRam0000000009534969 & 1) == 0) {
    if (iRam0000000009515578 == -1) {
      do {
        iVar1 = open("/dev/urandom",0,0x80000);
        if (iVar1 != -1) {
          iVar2 = FUN_0404bd80(0xffffffff,iVar1,0x9515578);
          if (iVar2 != -1) {
            close(iVar1);
          }
          goto LAB_03f858b8;
        }
        piVar4 = (int *)__errno();
      } while (*piVar4 == 4);
      if (*piVar4 == 2) {
        bRam0000000009534969 = 1;
      }
    }
LAB_03f858b8:
    if (iRam0000000009515578 != -1) {
      uVar6 = 0;
      do {
        sVar3 = read(iRam0000000009515578,(void *)(param_1 + (int)uVar6),
                     (long)(int)(param_2 - uVar6));
        if (sVar3 == -1) {
          piVar4 = (int *)__errno();
          iVar1 = 4;
          if (*piVar4 == 4) {
            iVar1 = 5;
          }
        }
        else {
          iVar1 = 0;
          uVar6 = uVar6 + (int)sVar3;
        }
      } while ((uVar6 != param_2) && (iVar1 != 4));
    }
  }
  if ((bRam000000000953496a & 1) == 0) {
    __seedval = time((time_t *)0x0);
    srand48(__seedval);
    bRam000000000953496a = 1;
  }
  if (0 < (int)param_2) {
    uVar7 = 0;
    lVar5 = 0;
    do {
      if ((uVar7 & 3) == 0) {
        lVar5 = lrand48();
      }
      *(byte *)(param_1 + uVar7) = *(byte *)(param_1 + uVar7) ^ (byte)lVar5;
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 >> 8;
    } while (param_2 != uVar7);
  }
  return;
}

